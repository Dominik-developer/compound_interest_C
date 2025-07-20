#include <stdio.h>
#include <math.h>

int main() {

    //compound interest calculation

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int times_compounded = 0;

    double total = 0.0;
    double amount = 0.0;
    double percentage = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the number of years: ");
    scanf("%d", &years);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &times_compounded);

        rate = rate / 100;

        total = principal * pow(1 + (rate / times_compounded) , times_compounded * years);

        amount = total - principal;

        percentage = (amount / principal) * 100;

    printf("Total amount after %d years: %.2lf\n", years, total);
    printf("Total return is %.2f, which is %.2f%% of the principal (%.2f).\n", amount, percentage, principal);

    return 0;
}