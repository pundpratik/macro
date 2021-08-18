#include<stdio.h>//which is start by # it is a pre-proccessor directive.which is intialize before program
#define circle (r*r*3.14)//macro is declare by #define  name  formula.
#define square a*a//macro
#define traingle ((h*b)/2)
#define rect (w*l)
#define pratik int  //now compiler allow to use pratik instead of int
typedef float p1;//it is another method of datatype defination ,now it allows to use p1 instead of float
int main()
{
	pratik a,r,h,b,w,l; //here pratik use instead of int
	p1 v=14.2;//here we use p1 instead of float
	printf("\n enter the vlue of r,a,h,b,w,l");
	scanf("%d%d%d%d%d%d",&r,&a,&h,&b,&w,&l);
	printf("\n area of circle is =%f",circle);
	printf("\n area of square is =%d",square);
	printf("\n area of traingle is =%d",traingle);
	printf("\n area of rectangle is =%d",rect);
	printf("\n float value =%f",v);

	return 0;
	
}
