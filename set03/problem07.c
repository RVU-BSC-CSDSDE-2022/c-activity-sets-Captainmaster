#include <stdio.h>
typedef struct _triangle 
{
	float base, altitude, area;
} Triangle;

Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base and height of the triangle: \n");
	scanf("%f%f",&t.base,&t.altitude);
	return t;
}
void find_area(Triangle *t)
{
  t->area=(t->base)*(t->altitude)/2;
}
void output(Triangle *t)
{
  printf("The area of triangle with base %f and height %f is %f",t->base,t->altitude,t->area);
}
int main()
{
  Triangle t1;
  t1=input_triangle();
  find_area(&t1);
  output(&t1);
}