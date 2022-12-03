#include <stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter the x and y co-ordinates of point a\n");
  scanf("%f%f",x1,y1);
  printf("Enter the x and co-ordinates of point b\n");
  scanf("%f%f",x2,y2);
}

float find_distance(float x1, float y1, float x2, float y2)
{
  
  float distance=pow((pow((x2-x1),2) + pow((y2-y1),2)),0.5);
  return distance;
}

void output(float x1, float y1, float x2, float y2, float distance)
{
  printf("The distance between points(%f,%f) and (%f,%f) if %f",x1,y1,x2,y2,distance);
}

int main(void)
{
  float x1,x2,y1,y2,distance;
  input(&x1,&x2,&y1,&y2);
  distance=find_distance(x1,y1,x2,y2);
  output(x1,y1,x2,y2,distance);
}