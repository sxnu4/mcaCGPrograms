#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>

void eightPoint(int xc, int yc, int x, int y){
	putpixel(x+xc, y+yc, YELLOW);
	putpixel(x+xc, -y+yc, YELLOW);
	putpixel(-x+xc, -y+yc, YELLOW);
	putpixel(-x+xc, y+yc, YELLOW);
	putpixel(y+xc, x+yc, YELLOW);
	putpixel(y+xc, -x+yc, YELLOW);
	putpixel(-y+xc, -x+yc, YELLOW);
	putpixel(-y+xc, x+yc, YELLOW);
}
void BresenhamCirce(int xc, int yc, int r){
	int x=0, y=r, d=3-(2*r);
	eightPoint(xc, yc, x, y);
	while(x<=y){
		if(d<=0){
			d=d+(4*x)+6;
		}
		else{
			d=d+(4*x)-(4*y)+10;
			y=y-1;
		}
		x=x+1;
		eightPoint(xc,yc,x,y);
	}
}
main(){
/* request auto detection */
int gdriver = DETECT, gmode, errorcode;
int xc,yc,r;

/* initialize graphics mode */
initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

/* read result of initialization */
errorcode = graphresult();

if (errorcode != grOk)  /* an error occurred */
{
	printf("Graphics error: %s\n", grapherrormsg(errorcode));
	printf("Press any key to halt.");
	getch();
	exit(1);

}
printf("Enter the values of xc and yc: ");
scanf("%d%d",&xc,&yc);
printf("Enter the radius value: ");
scanf("%d",&r);
BresenhamCircle(xc,yc,r);

/* clean up */
getch();
closegraph();

return 0;
}


