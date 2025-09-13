#include <stdio.h> 
int main(){
    float Total;
    Total = 0;
    int Type;
    printf("What type of Crust do you want (1.Regular crust:$0 2.Thin crust:$1 3.Stuffed crust:$2): ");
    scanf("%d", &Type);
    switch (Type)
    {
    case 1:
        Total += 0;
        break;
    case 2:
        Total += 1;
        break;
    case 3:
        Total += 2;
        break;    
    default:
        break;
    }
    printf("The new Total is %.1f",Total);
    return 0;
}
