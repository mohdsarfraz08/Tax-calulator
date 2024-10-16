#include <stdio.h>

int main()
{
    int income;
    int tax;

    printf("Enter Your annual Income amount ");
    scanf("%d", &income);
    if (income <= 300000)
    {
        printf("NIL TAX");
    }
    
else{
    if (income > 300000 || income <= 700000 )
    {
        /* code */
        tax = 0.05 *(income - 300000);
        printf("Your total tax on your income is %d\n ", tax);
    }
    else if (income >= 700001 || income <= 100000)
    {
        tax = 0.05 * (700000-300000) + 0.1 * (income - 700000);
        printf("Your total tax on your income is %d\n", tax);
    }
    else if (income >= 1000001 || income <= 1200000)
    {
        /* code */
        tax = 0.05 * (700000-300000) + 0.1 * (1200000-700000) + 0.15 * (income - 1000000);
        printf("Your total tax on your income is %d\n", tax);
    }
    else if (income >= 1200001 || income <= 1500000)
    {
         tax = 0.05 * (700000-300000) + 0.1 * (1200000-700000) + 0.15 * (1500000-1000000) + 0.2 * (income - 1200000);
        printf("Your total tax on your income is %d\n", tax);
    }
    else if (income > 1500000)
    {
         tax = 0.05 * (700000-300000) + 0.1 * (1200000-700000) + 0.15 * (1500000-1000000) + 0.2 * (1500000 - 1200000) + 0.3 * (income - 1500000);
        printf("Your total tax on your income is %d\n", tax);
    }
    
    else
    {
        printf("nil tax");
    }
}
return 0;
}
    
