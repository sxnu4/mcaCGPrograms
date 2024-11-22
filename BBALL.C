#include<graphics.h>
#include<conio.h>
int main(){
	int i,x,y,flag=0;
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    x= getmaxx()/2;
    y=30;

    while(!kbhit()){
        if(y>=getmaxx()-30 || y<=30)
        flag=!flag;
        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        circle(x,y,30);
        floodfill(x,y,RED);
        delay(30);
        cleardevice();
        if(flag){
            y=y+5;

        } else{
            y=y-5;
        }
    
    }
    closegraph();
    return 0;
}