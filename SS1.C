#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>


void main(){
int i,j;
int gdriver=DETECT,gmode,col=480,row=640,font=4,direction=2,size=8,color=15;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
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
closegraph();
}
