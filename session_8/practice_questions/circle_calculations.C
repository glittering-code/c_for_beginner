#include <stdio.h>
int main()
{
    float radius;
    printf("please enter radius of circle\n");
    scanf("%f",&radius);
    float perimeter = 2*3.14*radius;
    float area = 3.14*radius*radius;
    printf("Perimeter of circle is %f\n",perimeter);
    printf("Area of circle is %f\n",area);
    return 0;
}
