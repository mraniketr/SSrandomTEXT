#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
#include<dos.h>
#include<process.h>
void NAMERUN()
{
	char uname[20];
	int font,speed,i,col=480,row=640,color=15;
	printf("\n\nEnter username, frame delay and font(1-15)\n");
	scanf("%s%d%d",&uname,&speed,&font);
	settextstyle(font,0,20);

	while(!kbhit()){
		for(i=100; i<400; i++)
		{
			outtextxy(i,100,uname);
			delay(speed);
			cleardevice();
		}

		for(i=400; i>100; i--)
		{
			outtextxy(i,100,uname);
			delay(speed);
			cleardevice();
		}
	}
 cleardevice();
}

void SScircles()
{
	int r,x,y,p,xc=320,yc=240;

	cleardevice();
	r=10;
	while(!kbhit())
	{
		x=0;
		y=r;
		putpixel(xc+x,yc-y,1);

		p=3-(2*r);

		for(x=0;x<=y;x++)
		{
			if (p<0)
			{
				y=y;
				p=(p+(4*x)+6);
			}
			else
			{
				y=y-1;
				p=p+((4*(x-y)+10));
			}

			putpixel(xc+x,yc-y,1);
			putpixel(xc-x,yc-y,2);
			putpixel(xc+x,yc+y,3);
			putpixel(xc-x,yc+y,4);
			putpixel(xc+y,yc-x,5);
			putpixel(xc-y,yc-x,6);
			putpixel(xc+y,yc+x,7);
			putpixel(xc-y,yc+x,8);
			delay(8);
		}
		r=r+6;
		if(r>300)
		{
			r=10 ;
			cleardevice();
		}
	}
	cleardevice();
}

void SSlines()
{
	int i,j;
	int col=480,row=640,font=4,direction=2,size=8,color=15;
	cleardevice();


	while(!kbhit()){
	    //left to right
	    for(i=0; i<640; i++)
	    {
			for(j=0; j<480; j++)
			{
				putpixel(i,j,i+j);
			}
	    }
	    //right to left
	    for(i=640; i>0; i--)
	    {
			for(j=480; j>0; j--)
			{
				putpixel(i,j,j-i);
			}
	    }

	}
 cleardevice();
}

void SSrandomtext()
{
	int count=0;
	char uname[10];
	int col=480,row=640,font=4,direction=2,size=8,color=15;
	printf("Enter user name");
	scanf("%s",&uname);
	cleardevice();

	while(!kbhit()){
	    count=count+1;
	    settextstyle(random(font),random(direction),random(size));
	    setcolor(random(color));
	    delay(300);
	    if(count%10==0) // random background after 10 updates
	    {
		    setbkcolor(random(color));
	    }
	    outtextxy(random(col),random(row),uname);
	    if(count==50) //Clear screen after 50 updates
	    {
		    cleardevice();
		    count=0;
	    }
	}
	cleardevice();
}

void SSshapes()
{
	int i,j,c=0,ch;
	int col=480,row=640,font=4,direction=2,size=8,color=15;


	printf("Enter choice\n 1.DOTS \n 2.Lines \n 3. Circles\n");
	scanf("%d",&ch);
	cleardevice();
	if(ch==1){
		while(!kbhit()){
			c++;
			putpixel(random(640),random(480),15);
			delay(20);
			if(c>400)
			{
				c=0;
				cleardevice();
			}
		}
	}
	else if(ch==2)
	{
	    while(!kbhit()){
			c++;
			line(random(1000),random(1000),random(1000),random(1000));
			delay(20);
			if(c>400)

			{
				c=0;
				cleardevice();
			}
		}
	}

	else if(ch==3)
	{
	    while(!kbhit()) {
			c++;
			circle(random(640),random(480),50);
			delay(20);
			if(c>400)
			{c=0;
				cleardevice();
			}
		}
	}
  cleardevice();
}



void main()
{
	int gd=DETECT,gm,ch,ext;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	do{
	cleardevice();
	printf("\n1. DISPLAY TEXT ");
	printf("\n2. CONCENTRIC CIRCLES ");
	printf("\n3. LINES");
	printf("\n4. SHAPES ");
	printf("\n5. DISPLAY TEXT RANDOMLY ");
	printf("\n6. Exit");
	printf("\nCHOOSE FAVORITE SCREEN SAVER(1-5):- ");
	scanf("%d", &ch);

	switch(ch)
	{
	       case     1 : NAMERUN();
			break;
	       case	2 : SScircles();
			break;
	       case	3 : SSlines();
			break;
	       case	4 : SSshapes();
			break;
	       case	5 : SSrandomtext();
			break;
	       case 	6 : exit(1);
	       default: printf("Enter Correct choice(1-5)");

	}
	cleardevice();
	printf("Do you want to exit");
	scanf("%d",&ext);
	}while(ext!=1);

       //	NAMERUN();
       //	SScircles();
       //	SSlines();
       //	SSrandomtext();
       //       SSshapes();

	closegraph();
}




