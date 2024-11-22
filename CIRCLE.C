#include<graphics.h>
#include<conio.h>
#include<math.h>
void setPixel(int x, int y, int h, int k){
	putpixel(x+h, y+k, RED);
	putpixel(x+h, -y+k, RED);
	putpixel(-x+h, -y+k, RED);
	putpixel(-x+h, y+k, RED);
	putpixel(y+h, x+k, RED);
	putpixel(y+h, -x+k, RED);
	putpixel(-y+h, -x+k, RED);
	putpixel(-y+h, x+k, RED);
}
main(){

   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
	int h, k, r;
	double x,y,x2;
	h=200;
	k=200;
	r=100;
   /* initialize graphics mode */
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
   setbkcolor(WHITE);
   x=0, y=r;
   x2=r/sqrt(2);
   while(x<=x2){
   y=sqrt(r*r - x*x);
   setPixel(floor(x), floor(y), h,k);
   x+=1;
   }
   /* clean up */
   getch();
   closegraph();
   return 0;
}