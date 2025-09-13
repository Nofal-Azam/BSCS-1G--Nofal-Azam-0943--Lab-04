#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int Size;
    int NumberOfPizza;
    float Total = 0.0f;
    int Type;
    bool StuffedCrust = false;
    char cheese;
    int time;
    char Student;
    int delivery;
    bool freeGarlic = false;

    printf("Enter the Size of the pizza (1.Small, 2.Medium, 3.Large): ");
    scanf("%d", &Size);

    if (Size == 1) {
        printf("You chose Small Pizza\n");
    } else if (Size == 2) {
        printf("You chose Medium Pizza\n");
    } else if (Size == 3) {
        printf("You chose Large Pizza\n");
    } else {
        printf("You entered an incorrect option\n");
        return 0;
    }

    printf("How many pizzas do you want to buy: ");
    scanf("%d", &NumberOfPizza);

    if (NumberOfPizza > 1) {
        printf("Check our multi-pizza deals:\n");
        printf("1 small $8, 2 small $15, 3 small $21\n");
        printf("1 medium $10, 2 medium $19, 3 medium $25\n");
        printf("1 large $11, 2 large $20, 3 large $29\n");

        if (Size == 1)
            Total += (NumberOfPizza / 3) * 21 + (NumberOfPizza % 3) * 8;
        else if (Size == 2)
            Total += (NumberOfPizza / 3) * 25 + (NumberOfPizza % 3) * 10;
        else if (Size == 3)
            Total += (NumberOfPizza / 3) * 29 + (NumberOfPizza % 3) * 11;
    } else {
        if (Size == 1)      Total += 8;
        else if (Size == 2) Total += 10;
        else if (Size == 3) Total += 11;
    }

    printf("What type of crust do you want (1.Regular:$0  2.Thin:$1  3.Stuffed:$2): ");
    scanf("%d", &Type);

    switch (Type) {
        case 1: Total += 0; break;
        case 2: Total += 1; break;
        case 3: Total += 2; StuffedCrust = true; break;
        default: printf("Invalid crust option\n"); break;
    }

    printf("Do you want extra cheese (Y/N): ");
    scanf(" %c", &cheese);
    if (cheese == 'Y' || cheese == 'y') {
        Total += 1.5f;
    }

    printf("Enter the current time (0-23): ");
    scanf("%d", &time);
    if (time >= 11 && time <= 14) {
        Total *= 0.9f;
    }

    printf("Do you have your Student ID (Y/N): ");
    scanf(" %c", &Student);
    if (Student == 'Y' || Student == 'y') {
        Total -= 2;
    }

    printf("Is it 1.Delivery or 2.Pickup: ");
    scanf("%d", &delivery);
    if (delivery == 1) {
        Total += 3;
    }

    if (NumberOfPizza >= 3 && StuffedCrust) {
        freeGarlic = true;
    }


    printf("\n----- Receipt -----\n");
    printf("Pizzas ordered : %d\n", NumberOfPizza);
    if (Type == 1)      printf("Crust          : Regular\n");
    else if (Type == 2) printf("Crust          : Thin\n");
    else if (Type == 3) printf("Crust          : Stuffed\n");
    if (freeGarlic)     printf("Bonus          : Free garlic bread!\n");
    printf("Total Amount   : $%.2f\n", Total);


    return 0;
}

