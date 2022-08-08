#include <stdio.h>
int main()
{
    float length, breadth;
    printf("enter length and breadth\n");
    scanf("%f %f", &length,&breadth);
    float area = length*breadth;
    float perimeter = 2*(length+breadth);
    printf("area of rectangle is %f\n",area);
    printf("perimeter of rectangle is %f\n",perimeter);
    return 0;
}
