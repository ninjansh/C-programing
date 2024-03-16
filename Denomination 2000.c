#include<stdio.h>
int main()
{
    int amount, no_of_2000_notes, remaining_amount;

    printf("Enter the amount in rupees: ");
    scanf("%d", &amount);
    no_of_2000_notes = amount / 2000;
    remaining_amount = amount % 2000;
    printf("Number of Rs 2000 notes required: %d\n", no_of_2000_notes);
    printf("Remaining amount: Rs %d\n", remaining_amount);
    return 0;
}
