# include <stdio.h>

int main (){
    
    float Total;
    int delivery;
    Total = 8.0;
    printf("Is it 1.Delivery or 2.Pickup: ");
    scanf("%d", &delivery);
    if (delivery == 1){
        Total += 3;
    }    
    printf("Your new total is %.1f", Total);
    return 0;
}