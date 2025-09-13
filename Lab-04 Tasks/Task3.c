#include <stdio.h>
int main(){
    int NumberOfPizza;
    float Total;
    Total = 0;
    printf("How many Pizza do you want to buy: ");
    scanf("%d", &NumberOfPizza);
    switch (NumberOfPizza)
    {
    case 1:
        printf("1 pizza is of $8");
        Total = 8;
        break;
    case 2:
        printf("2 pizzas are of $15");
        Total = 15;
        break;
    case 3:
        printf("3 pizzas are of $21");
        Total = 15;
        break;    
    default:
        break;
    }
    printf("\nYour Total is %.1f ", Total);
    return 0;
}