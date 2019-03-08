#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
char uname[20];
int gd=DETECT,font,speed,gm,i,col=480,row=640,color=15;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter username, frame delay and font(1-15)");
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
getch();
closegraph();
}