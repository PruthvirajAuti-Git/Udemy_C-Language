#include<stdio.h>
void main()
{
   double height,weidth,peri,area;
   printf("Enter Height and Weidth:\n");
   scanf("%lf%lf",&height,&weidth);
   peri=2*(height+weidth);
   area=height*weidth;
   printf("\n");
   printf("Area of rect is :%lf\n",area);
   printf("Peremeter of the rectangle is:%lf",peri);


}