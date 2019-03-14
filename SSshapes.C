#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
void main(){
int i,j,c=0,ch;
int gdriver=DETECT,gmode,col=480,row=640,font=4,direction=2,size=8,color=15;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

printf("Enter choice\n 1.DOTS \n 2.Lines \n 3. Circles\n");
scanf("%d",&ch);
cleardevice();
if(ch==1){
	while(!kbhit()){
	 c++;
	putpixel(random(640),random(480),15);
	delay(20);
	if(c>400)
		{c=0;
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
	{c=0;
	cleardevice();
	}
     }
}

else if(ch==3)
{
    while(!kbhit()){
	 c++;
	 circle(random(640),random(480),50);
	delay(20);
	if(c>400)
	{c=0;
	cleardevice();
	}
     }
}



closegraph();
}
