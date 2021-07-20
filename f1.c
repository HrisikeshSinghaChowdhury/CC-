#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
  char list[30];
  int term,i=0,n,j,t;
  int sum = 0,i1=0,i2=0;
  float mean,SD,i3,D,D2,SUM;
  char ch,c;
  FILE *fp1, *fp2 ;
  clrscr();

  fp1 = fopen("list.txt", "r");  //OPEN SOURCE FILE
  fp2 = fopen("target.txt","w");
  printf("\nContents of the source file : \n\n");

/** READ DATA FROM SOURCE FILE AND STORE IT IN AN ARRAY AND TARGET FILE **/
  while(fscanf(fp1,"%d",&term)==1)
  {
     printf("%d ",term);
     list[i++] = term;
     fprintf(fp2,"%d ",term);
  }
     n=i;
  fclose(fp2);
  fclose(fp1);

  fp2 = fopen("target.txt","a");
  if(fp2==NULL)
  {
     printf("Error in append mode");
     exit(1);
  }

  fprintf(fp2,"\n\nNo of elements : %d",n);

/** SORTING THE LIST AND STORING THE SORTED LIST INTO THE TARGET FILE **/
  for(i=0; i<n-1; i++)
  {
    for(j=i+1; j<n; j++)
    {
      if(list[i]>list[j])
        {
          t=list[i];
          list[i]=list[j];
          list[j]=t;
        }
    }
}
  fprintf(fp2,"\n\nThe sorted list is :\n\n");
  for(i=0; i<n; i++)
     fprintf(fp2,"%3d", list[i]);

/** CALCULATION OF SUM AND MEAN OF THE LIST **/
  for(i=0; i<n; i++)
  sum = sum + list[i];
  fprintf(fp2,"\n\nTotal sum : %d", sum);
  mean = (float) sum / n;
  fprintf(fp2,"\n\nMean is :%.2f", mean);

/** CALCULATION OF MEDIAN OF THE LIST **/
  if((n%2) == 0)
  {	
     i1 = n/2;
     i2 = i1-1;
     i3 = (list[i1] + list[i2]) / 2.0  ;
     fprintf(fp2,"\n\nMedian is : %.2f", i3);
  }
  else
  {
     i3 = list[(n+1)/2];
     fprintf(fp2,"\n\nMedian is : %d", i3);
  }

/** CALCULATION OF THE QUARTILES OF THE LIST **/
  i1 = (n+1)/4;
  i2 = 3 * i1;
  i1--; i2--;
  fprintf(fp2,"\n\nFirst quartile is : %d", list[i1]);
  fprintf(fp2,"\nSecond quartile is : %f", i3);
  fprintf(fp2,"\nThird quartile is : %d", list[i2]);

/** CALCULATION OF THE STANDARD DEVIATION OF THE LIST **/
  SUM = 0;
  for(i=0;i<n;i++)
  {
    D = list[i] - mean;
    D2 = D*D;
    SUM = SUM + D2;
  }
  SD = SUM / n;
  fprintf(fp2,"\n\nStandard daviation : %.2f",SD);
  fclose(fp2);

/** DISPLAYING THE ULTIMATE CONTENTS OF THE TARGET FILE **/
  fp2 = fopen("target.txt","r");
  printf("\n\nAfter Appending Contents of the target file : \n");
  printf("---------------------------------------------\n\n");
  while ( 1 )
  {
     c = fgetc (fp2) ;
     if ( c == EOF )
       break ;
     printf ( "%c", c ) ;
  }
  fclose(fp2);
  getch();
}
