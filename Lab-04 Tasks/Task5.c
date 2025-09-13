# include <stdio.h>

int main(){
    char cheese;
    float Total;
    Total = 0;
    printf("Do you want extra cheese(Y/N): ");
    scanf(" %c", &cheese);
    if(cheese == 'Y'){
        Total += 1.5;
    }
    printf("Your New Total is %.1f",Total);

    return 0;
}