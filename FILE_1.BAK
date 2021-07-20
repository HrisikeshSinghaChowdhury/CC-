#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define FNAME "trial.txt"
#define ONAME "last.txt"
void main()
{
    char ch;
    int characters =0;
    FILE *fp,*ft,*fs;



    fp=fopen(FNAME,"r");
    ft=fopen(ONAME,"w");
    clrscr();
    if(fp==NULL||ft==NULL)
    {
	 printf("\n ERROR CREATING FILE");
	 getch();
	 exit(0);
    }
    while(((ch=fgetc(fp))!=EOF))
    {
	fprintf(ft,"%c",ch);
    }
    fs=fopen(ONAME,"a");
    while(((ch=fgetc(fp))!=EOF))
    {
	if(ch=='\n')
	   characters++;
    }
    fprintf(fs,"%d",characters);
    fprintf(fs,"%s","sanjib kumar mondal");
    fclose(fp);
    fclose(ft);
    getch();
}