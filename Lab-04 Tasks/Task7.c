#include <stdio.h>

int main(){
    char Student;
    float Total;
    Total = 4;
    printf("Do you have your Student ID(Y/N): ");
    scanf(" %c", &Student);
    if(Student == 'Y'){
        Total -= 2;
    }
    printf("Your new Total is %.1f", Total);
    return 0;
}