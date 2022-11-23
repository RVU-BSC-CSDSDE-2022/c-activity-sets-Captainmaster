#include <stdio.h>
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

#include <stdio.h>
void input_triangle(float *base,float *height)
{
  printf("enter base and height\n");
  scanf("%f%f",base,height);
}

float find_area(float base, float height)
{
  float area = 0.5 * base * height;
  return area;
}

void find_area(float base, float height, float *area)
{
  *area = 0.5 * base * height;
}


void output(float base, float height, float area)
{
  printf("The area of the triangle with %f as base and %f as height is %f",base,height,area);
  }


int
int main(void)
{
    float base, height, area;
    input(&base, &height);

    find_area(base,height,&area)
    output(base,height,area);
    return 0;
}