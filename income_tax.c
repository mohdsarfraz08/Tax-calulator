#include <stdio.h>

int main()
{
    int income;
    float tax = 0;

    printf("Enter Your Annual Income Amount: ");
    scanf("%d", &income);

    if (income < 0)
    {
        printf("Invalid income amount. Please enter a positive number.\n");
        return 1; // Exit the program
    }

    // No tax if income is less than or equal to 3 lakhs
    else if (income <= 300000)
    {
        printf("No Tax. Your income is below the taxable limit.\n");
    }
    else
    {
        // 5% tax for income between 3,00,001 and 7,00,000
        if (income > 300000 && income <= 700000)
        {
            tax = 0.05 * (income - 300000);
        }
        // 10% tax for income between 7,00,001 and 10,00,000
        else if (income > 700000 && income <= 1000000)
        {
            tax = 0.05 * (700000 - 300000) + 0.1 * (income - 700000);
        }
        // 15% tax for income between 10,00,001 and 12,00,000
        else if (income > 1000000 && income <= 1200000)
        {
            tax = 0.05 * (700000 - 300000) + 0.1 * (1000000 - 700000) + 0.15 * (income - 1000000);
        }
        // 20% tax for income between 12,00,001 and 15,00,000
        else if (income > 1200000 && income <= 1500000)
        {
            tax = 0.05 * (700000 - 300000) + 0.1 * (1000000 - 700000) + 0.15 * (1200000 - 1000000) + 0.2 * (income - 1200000);
        }
        // 30% tax for income above 15,00,000
        else if (income > 1500000)
        {
            tax = 0.05 * (700000 - 300000) + 0.1 * (1000000 - 700000) + 0.15 * (1200000 - 1000000) + 0.2 * (1500000 - 1200000) + 0.3 * (income - 1500000);
        }

        printf("Your total tax on your income is %.2f\n", tax);
    }

    return 0;
}
