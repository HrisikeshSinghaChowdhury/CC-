#include<graphics.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
   int graphdriver = VGA,graphmode=VGAHI,j,move,h=1,x;


   initgraph(&graphdriver,&graphmode,"C:\\Turboc3\\BGI");

