#include<stdio.h>
#include<conio.h>
#define max 10

static int front=0,rear=-1;

/* Node of graph */
typedef struct
{
	char info;
	int index;
	int status;  /* status=1:ready state , status=2:waiting state , status=3:processed state */
}node;

/* Queue to store the nodes */
node queue[max];

void insert(node n)
{
  if(rear==(max-1))
  {
	 printf("\nQueue Full");
	 return;
  }
  rear++;
  queue[rear]=n;
  return;
}

node delet()
{
  node temp;
  temp.index=-10;
  if(rear<front)
	  printf("\nQueue Empty");
  else
  {
	 temp=queue[front];
	 front++;
  }
  return(temp);
}

/* Graph definition and functions */
typedef struct
{
	int total_nodes;
	node vertex[max];
	int adj[max][max];
}graph;

graph get_vertex(graph g)
{
 int i;
 do
 {
  printf("\nEnter total number of vertices :");
  scanf("%d",&g.total_nodes);
  if(g.total_nodes>max)
	  printf("\nTotal number of cannot exceed %d",max);
 }while(g.total_nodes>max);
 for(i=0;i<g.total_nodes;i++)
 {
	 printf("\nEnter label of vertex :");
	 g.vertex[i].info=getche();
	 getch();
    g.vertex[i].index=i;
	 g.vertex[i].status=1;
 }
 return(g);
}

graph get_edge(graph g)
{
  int i,j,ans;
  if(g.total_nodes==0)
  {
	  printf("\nThe number of vertices is 0");
	  return(g);
  }
  for(i=0;i<g.total_nodes;i++)
  {
	  for(j=0;j<g.total_nodes;j++)
	  {
		 printf("\nIs there an edge between %c and %c (Y/N)?",g.vertex[i].info,g.vertex[j].info);
		 ans=getche();
		 if(ans=='y'||ans=='Y')
			g.adj[i][j]=1;
		 else
			g.adj[i][j]=0;
	  }
	}
	return(g);
}

void print_graph(graph g)
{
  int i,j;
  printf("\n\n\nTotal number of nodes : %d \n",g.total_nodes);
  printf("\nThe nodes are :\t");
  for(i=0;i<g.total_nodes;i++)
	  printf("%c\t",g.vertex[i].info);
  printf("\n\nThe adjacency matrix :\n");
  for(i=0;i<g.total_nodes;i++)
	  printf("\t%c",g.vertex[i].info);
  printf("\n");
  for(i=0;i<g.total_nodes;i++)
  {
	 printf("\n%c\t",g.vertex[i].info);
	 for(j=0;j<g.total_nodes;j++)
		 printf("%d\t",g.adj[i][j]);
  }
}

void bfs(graph g)
{
  int i,ind,count=0;
  node temp;
  printf("\n\nBreadth -First Search Traversal :\n");
  insert(g.vertex[0]);
  g.vertex[0].status=2;
  while(count<g.total_nodes)
  {
	 temp=delet();
	 printf("\t%c",temp.info);
	 count++;
	 ind=temp.index;
	 g.vertex[ind].status=3;
	 for(i=0;i<g.total_nodes;i++)
	 {
		 if((g.adj[ind][i]!=0)&&(g.vertex[i].status==1))
		 {
			insert(g.vertex[i]);
			g.vertex[i].status=2;
		 }
	 }
  }
}

void main()
{
  graph m;
  clrscr();
  m.total_nodes=0;
  m=get_vertex(m);
  m=get_edge(m);
  print_graph(m);
  bfs(m);
  getch();
}
/****************OUTPUT*******************
Enter label of vertex :3
Is there an edge between 1 and 1 (Y/N)?y
Is there an edge between 1 and 2 (Y/N)?y
Is there an edge between 1 and 3 (Y/N)?y
Is there an edge between 2 and 1 (Y/N)?y
Is there an edge between 2 and 2 (Y/N)?n
Is there an edge between 2 and 3 (Y/N)?n
Is there an edge between 3 and 1 (Y/N)?y
Is there an edge between 3 and 2 (Y/N)?n
Is there an edge between 3 and 3 (Y/N)?y


Total number of nodes : 3

The nodes are : 1       2       3

The adjacency matrix :
	1       2       3

1       1       1       1
2       1       0       0
3       1       0       1

Breadth -First Search Traversal :
	1       2       3
/