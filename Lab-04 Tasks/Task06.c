# include <stdio.h>

int main(){
    int time;
    float Total;
    Total = 19;
    printf("Enter the current Time(0-23): ");
    scanf("%d",&time);
    if(time >= 11 && time <= 14){
        Total *= 0.9;
    }
    printf("Your new Total is %.1f.", Total);
    return 0;
}