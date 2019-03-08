#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
void main(){
int i,j,c=0;
int gdriver=DETECT,gmode,col=480,row=640,font=4,direction=2,size=8,color=15;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
cleardevice();
while(!kbhit()){
 c++;
putpixel(random(640),random(480),15);
delay(20);
if(c>400)
{c=0;
cleardevice();
}
}
closegraph();
}
