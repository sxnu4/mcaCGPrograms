#include<conio.h>
#include<graphics.h>
int main(){
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setfillstyle(SOLID_FILL, YELLOW);
    rectangle(250,100,450,280);
    floodfill(252,158,15);
    getch();
    closegraph();
    return 0;
}