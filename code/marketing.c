#include <stdio.h>
int main() {
    int item1, item2, item3, item4;
    printf("Enter the price for item 1: ");
    scanf("%d", &item1);
    printf("Enter the price for item 2: ");
    scanf("%d", &item2);
    printf("Enter the price for item 3: ");
    scanf("%d", &item3);
    printf("Enter the price for item 4: ");
    scanf("%d", &item4);

    printf("Price of item 1: %d\nPrice of item 2: %d\nPrice of item 3: %d\nPrice of item 4: %d\n", item1, item2, item3, item4);

    int subtotal = item1 + item2 + item3 + item4;
    printf("The subtotal of the sale is: %d\n", subtotal);

    double saletax = subtotal * (8.0 / 100); // Use double for saletax
    printf("The sales tax amount is: %.2lf\n", saletax);
    subtotal += saletax;
    double total = subtotal;

    if (subtotal > 10000) {
        double discount10k = subtotal * (4.0 / 100); // Use double for discount calculations
        total -= discount10k;
        printf("After a 4%% discount, the price is: %.2lf\n",total);
    } else if (subtotal > 20000) {
        double discount20k = subtotal * (6.0 / 100); // Use double for discount calculations
        total -= discount20k;
        printf("After a 6%% discount, the price is: %.2lf\n",total);
    } else if (subtotal > 30000) {
        double discount30k = subtotal * (8.0 / 100); // Use double for discount calculations
        total -= discount30k;
        printf("After an 8%% discount, the price is: %.2lf\n",total);
    }

    return 0;
}
