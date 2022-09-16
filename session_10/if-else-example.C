#include <stdio.h>

int main()
{
    float basic_salary;
    printf("please enter your basic salary\n");
    scanf("%f",&basic_salary);
    float HRA;
    if(basic_salary < 15000) {
        HRA = 1000;
    } else {
        HRA = basic_salary*10/100;
    }
    float gross_salary = basic_salary + HRA;
    printf("gross salary = %f\n",gross_salary);
    //printf("Hello World");

    return 0;
}
