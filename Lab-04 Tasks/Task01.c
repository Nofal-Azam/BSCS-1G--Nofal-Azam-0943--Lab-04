#include <stdio.h>
 
int main(){
    int Size;
    printf("Enter the Size of the pizza(1.Small, 2.Medium, 3.Large): ");
    scanf("%d", &Size);
    if(Size == 1){
        printf("You choose small pizza");
    }
    else if(Size == 2){
        printf("you choosed Medium Pizza");
    }
    else if(Size == 3){
        printf("You choosed Larged Pizza");
    }
    else {
        printf("You entered an incorrect option");
    }
    return 0;
}