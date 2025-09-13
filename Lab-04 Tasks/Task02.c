#include <stdio.h>
 
int main(){
    int NumberOfPizza;
    printf("How many Pizza do you want to buy: ");
    scanf("%d", &NumberOfPizza);
    if(NumberOfPizza > 1){
        printf("Check our multi-pizza deals.");
    }
    else{
        printf("Your total is $8");
    }
    return 0;
}