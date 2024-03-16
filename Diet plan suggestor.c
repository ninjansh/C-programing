#include <stdio.h>
int main() {
    char gender, foodTime;
    int calories = 0;
    printf("Enter your gender (M for Male, F for Female): ");
    scanf(" %c", &gender);
    printf("Enter the food time (B for Breakfast, L for Lunch, D for Dinner): ");
    scanf(" %c", &foodTime);
    switch (gender) {
        case 'M':
        case 'm':
            switch (foodTime) {
                case 'B':
                case 'b':
                    calories = 500;
                    break;
                case 'L':
                case 'l':
                    calories = 800;
                    break;
                case 'D':
                case 'd':
                    calories = 700;
                    break;
                default:
                    printf("Invalid food time input!\n");
                    return 1;
            }
            break;
        case 'F':
        case 'f':
            switch (foodTime) {
                case 'B':
                case 'b':
                    calories = 400;
                    break;
                case 'L':
                case 'l':
                    calories = 600;
                    break;
                case 'D':
                case 'd':
                    calories = 500;
                    break;
                default:
                    printf("Invalid food time input!\n");
                    return 1;
            }
            break;
           default:
            printf("Invalid gender input!\n");
            return 1;
    }
printf("Your suggested calorie intake for %c (%c) is: %d calories\n", gender, foodTime, calories);
    return 0;
}
