
    #include <stdio.h>

int main() {

    int N;
    float price;
    float discount;
    float discountedPrice;
    float totalRevenue;

    totalRevenue = 0;

    printf("Enter number of orders: ");
    scanf("%d", &N);

    int i = 1;
    while (i <= N) {

        printf("Enter price of item: ");
        scanf("%f", &price);

        if (price > 750) {
            discount = price * 0.05;
            discountedPrice = price - discount;
        } else {
            discount = 0;
            discountedPrice = price;
        }

        printf("Discounted bill: ");
        printf("%.2f\n", discountedPrice);

        totalRevenue = totalRevenue + discountedPrice;

        i = i + 1;
    }

    printf("Total revenue: ");
    printf("%.2f\n", totalRevenue);

    return 0;
}