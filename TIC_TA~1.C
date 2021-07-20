#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
    int i = 0,player = 0,p = 0,row = 0, column = 0,line = 0,winner = 0;
    char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    clrscr();
    for( i = 0; i<9 && winner==0; i++)

    {
	printf("\n\n");
	printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
	printf("-----------\n");
	printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
	printf("-----------\n");
	printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);

	player = i%2 + 1;

	do
	{
	 printf("\nPlayer %d, please enter the number of the square "
		   "where you want to place your %c: ", player,(player==1)?'X':'O');
	    scanf("%d", &p);

	    row = --p/3;
	    column = p%3;
	}
	while(p<0 || p>9 || board[row][column]>'9');

	board[row][column] = (player == 1) ? 'X' : 'O';

	if((board[0][0] == board[1][1] && board[0][0] == board[2][2]) ||
	   (board[0][2] == board[1][1] && board[0][2] == board[2][0]))
	    winner = player;
	else

	    for(line = 0; line <= 2; line ++)

		if((board[line][0] == board[line][1] && board[line][0] == board[line][2])||
		   (board[0][line] == board[1][line] && board[0][line] == board[2][line]))
		    winner = player;

    }
    printf("\n\n");
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("-----------\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("-----------\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);

    if(winner == 0)
    {
	printf("\nDraw\n");
	for(i=20;i<=100;i++)
	{
	   sound(i);
	   delay(25);

	}
    }
     else
    {

	printf("!!!! CONGRATULATIONS !!!!\nplayer %d, HAS WON!\n", winner);
	for(i=720;i<=980;i=i+30)
	{
	   sound(i);
	   delay(225);

	}

    }
    nosound();
    getch();
}