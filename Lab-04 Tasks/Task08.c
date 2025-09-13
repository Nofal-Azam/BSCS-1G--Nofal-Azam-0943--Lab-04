#include <stdio.h>

int main(){
    int NumberOFPizza;
    char StuffedCrust;
    printf("Enter Number of Pizza ordered: ");
    scanf("%d", &NumberOFPizza);
    printf("did you order Stuffed Crust(y/n): ");
    scanf(" %c", &StuffedCrust);
    if (NumberOFPizza >= 3 && StuffedCrust == 'Y'){
        printf("You get a free garlic Bread!");

    }


    return 0;
}