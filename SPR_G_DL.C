/****************************************************************************
  *                    PROGRAM TO PRINT SQUARE MATRIX                     *
   *                           USING [ delay() ]                         *
    *              CREATOR,DESIGNER,EDITOR:- Aparup Tripathi            *
     *                                                                 *
      *****************************************************************/
									
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#define TIME 100

void main()
{
	int gd=DETECT,gm;
	char ch;
	int r=0,c=0,i=0,x,y;
	int row=0,col=0;
	clrscr();
	initgraph(&gd,&gm,"..\\BGI");
	printf("enter the no of rows ");
	scanf("%d",&x);
	printf("enter the no of coloumn ");
	scanf("%d",&y);
	cleardevice();
	x-=1;
	y-=1;
	r=0;
	c=0;
	i=0;
	ch='r';
	while(r!=x/2 && c!=y-3)
		{
			switch(ch)
			{
				case'r':
					{
						c=i;
						r=i;
						for(;c<=y-i;c++)
						{
							col=c*10;
							outtextxy(col,row,"*");
							delay(TIME);
						}
					}
				case'd':
					{
						c=y-i;
						for(;r<=x-i;r++)
						{
							row=r*10;
							outtextxy(col,row,"*");
							delay(TIME);
						}
					}
				case'l':
					{
						r=x-i;
						for(;c>=i;c--)
						{
							col=c*10;
							outtextxy(col,row,"*");
							delay(TIME);
						}
					}
				case'u':
					{
						c=i;
						++i;
						for(;r>=i;r--)
						{
							row=r*10;
							outtextxy(col,row,"*");
							delay(TIME);
						}
					}
			}
		}																																																														printf("\n\n\n\n\nPROGRAM CREATED BY APARUP TRIPATHI,\tClass-XI,\tSec-D");
	getch();
	closegraph();
}