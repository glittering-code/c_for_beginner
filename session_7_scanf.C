#include <stdio.h>

int main()
{
    float obtained_marks;
    float total_marks;
    //scanf("%f %f",&obtained_marks, & total_marks); // ampersand
    printf("enter scored marks\n");
    scanf("%f",&obtained_marks);
    printf("enter total marks\n");
    scanf("%f",&total_marks);
    float percentage = obtained_marks/total_marks*100;
    printf("percentage is %f\n",percentage);
    //printf("Hello World");

    return 0;
}
