#include <stdio.h>
#include <stdlib.h>

#include <graphics.h>
#include <conio.h>

void main(){
int count=0;
char uname[10];
int gdriver=DETECT,gmode,col=480,row=640,font=4,direction=2,size=8,color=15;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
printf("Enter user name");
scanf("%s",&uname);
cleardevice();


while(!kbhit()){
    count=count+1;
    settextstyle(random(font),random(direction),random(size));
    setcolor(random(color));
    delay(300);
    if(count==10) // random background after 10 updates
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
closegraph();
}
