/* BINARY SEARCH TREE (Creation, Traversals, Deletion) */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct bst
{
	int info;
	struct bst *left;
	struct bst *right;
};

typedef struct bst node;

node * create(int total);

void inorder(node *p);
void preorder(node *p);
void postorder(node *p);

node * maketree(int x);
void setleft(node *p,int x);
void setright(node *p,int x);

node * delet(node *p,int key);

void main()
{
  node *root;
  int total,key;
  printf("\nEnter total num of terms : ");
  scanf("%d",&total);
  if(total<=0)
  {
	  printf("\nInvalid number of terms.");
	  exit(1);
  }

  root=create(total);

  printf("\n Inorder Traversal :\t");
  inorder(root);
  printf("\n Preorder Traversal :\t");
  preorder(root);
  printf("\n Postorder Traversal :\t");
  postorder(root);

  printf("\n\nEnter key to delete :");
  scanf("%d",&key);
  root=delet(root,key);
  printf("\n Inorder Traversal :\t");
  inorder(root);

}


node * create(int tot)
{
  node *ptree, *p, *q;
  int num,i;
  printf("\nEnter term :");
  scanf("%d",&num);
  ptree=maketree(num);
  for(i=1;i<tot;i++)
  {
	 printf("\nEnter term : ");
	 scanf("%d",&num);
	 p=q=ptree;
	 while(q!=NULL)
	 {
		p=q;
		if(num<p->info)
		  q=p->left;
		else
		  q=p->right;
	 }
	 if(num<p->info)
		setleft(p,num);
	 else
		setright(p,num);
  }
  return(ptree);
}



node * maketree(int x)  /* Creates a new node */
{
  node *p;
  p=(node *)malloc(sizeof(node));
  p->info=x;
  p->left=NULL;
  p->right=NULL;
  return(p);
}

void setleft(node *p,int x) /* creates a left child of a node p*/
{
	if(p==NULL)
	  printf("\nVoid left insertion");
	else
	{
	  if(p->left!=NULL)
		 printf("\nInvalid left insertion");
	  else
		 p->left=maketree(x);
	}
}

void setright(node *p,int x)  /* creates a right child of a node p */
{
	if(p==NULL)
	  printf("\nVoid right insertion");
	else
	{
	  if(p->right!=NULL)
		 printf("\nInvalid right insertion");
	  else
		  p->right=maketree(x);
	}
}

void inorder(node *p)  /* inorder traversal */
{
  if(p!=NULL)
  {
	 inorder(p->left);
	 printf("%d\t",p->info);
	 inorder(p->right);
  }
}

void preorder(node *p)  /* preorder traversal */
{
	if(p!=NULL)
	{
	  printf("%d\t",p->info);
	  preorder(p->left);
	  preorder(p->right);
	}
}

void postorder(node *p)   /* postorder traversal */
{
	if(p!=NULL)
	{
		postorder(p->left);
		postorder(p->right);
		printf("%d\t",p->info);
	}
}

node * delet(node *ptree,int key)
{
	node *p, *q, *rp, *f, *s;
	p=ptree;
	q=NULL;
	/* search for the node with the key, p is the node to be deleted and q the parent node */
	while((p!=NULL)&&(p->info!=key))
	{
	  q=p;
	  if(key<p->info)
		 p=p->left;
	  else
		 p=p->right;
	}
	if(p==NULL)
	{
		printf("\nNode not Found");
		return(ptree);
	}
	/* root is a single node which when deleted forms a null tree*/
	if((ptree->info==key)&&(ptree->left==NULL)&&(ptree->right==NULL))
	{
		printf("\nThe only node is being deleted ");
		return(NULL);
	}
	/* rp is the node that will relace node p */

	/* the node to be deleted has only one subtree */
	if((p->left==NULL)||(p->right==NULL))
	{
		if(p->left==NULL)
		  rp=p->right;
		else
		  rp=p->left;
		if(q->left==p) /* The node to be deleted is the left child of the parent q*/
		  q->left=rp;
		else
		  q->right=rp;
		return(ptree);
	}

	/* node p has two sons. set rp to the inorder successor of p and f to the parent of rp */
	f=p;
	rp=p->right;
	s=rp->left;   /* s is allways the inorder successor of rp */
	while(s!=NULL)
	{
	  f=rp;
	  rp=s;
	  s=s->left;
	}
	/* at this point rp is the inorder successor of p */
	if(f!=p)
	{
		f->left=rp->right;
		rp->right=p->right;
		rp->left=p->left;
	}
	if(q==NULL) /* root is deleted */
		return(rp);
	else
	{
		if(q->left==p)
			q->left=rp;
		else
			q->right=rp;
		return(ptree);
	}
}



   
