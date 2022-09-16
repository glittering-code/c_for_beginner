#include <stdio.h>

int main()
{
    float price_per_item;
    int quantity;
    printf("please enter price per item and the quantity\n");
    scanf("%f %d",&price_per_item,&quantity);
    float expenses = price_per_item * quantity;
    if(quantity > 1000) {
        expenses = expenses - expenses*10/100;
        printf("heloo\n");
    }
    printf("total expenses = %f",expenses);
    return 0;
}
