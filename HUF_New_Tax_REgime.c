/*
** HUF Income Tax Calculator (New Tax Regime)
**
** Disclaimer:
** This code is intended to provide a basic calculation of income tax for Hindu Undivided Family (HUF)
** under the new tax regime in India. It may not account for all specific deductions, exemptions,
** and complexities of the Indian Income Tax Act.
**
** For accurate and up-to-date tax calculations, please consult with a tax professional or refer to the
** official website of the Income Tax Department of India.
*/

#include <stdio.h>

float calculate_base_tax(int income) {
    float tax = 0.0;

    if (income > 300000 && income <= 600000) {
        tax = 0.05 * (income - 300000);
    } else if (income > 600000 && income <= 900000) {
        tax = 15000 + 0.1 * (income - 600000);
    } else if (income > 900000 && income <= 1200000) {
        tax = 45000 + 0.15 * (income - 900000);
    } else if (income > 1200000 && income <= 1500000) {
        tax = 90000 + 0.2 * (income - 1200000);
    } else if (income > 1500000) {
        tax = 150000 + 0.3 * (income - 1500000);
    }

    return tax;
}

float calculate_surcharge(int income, float base_tax) {
    float surcharge = 0.0;

    if (income > 5000000 && income <= 10000000) {
        surcharge = 0.1 * base_tax;
    } else if (income > 10000000 && income <= 20000000) {
        surcharge = 0.15 * base_tax;
    } else if (income > 20000000) {
        surcharge = 0.25 * base_tax;
    }

    return surcharge;
}

int main() {
    int income;

    printf("Enter Your Income: ");
    if (scanf("%d", &income) != 1 || income < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    if (income <= 300000) {
        printf("NIL TAX\n");
        return 0;
    }

    float base_tax = calculate_base_tax(income);
    float surcharge = calculate_surcharge(income, base_tax);
    float total_tax = base_tax + surcharge;

    printf("Income: %d\n", income);
    printf("Base Tax: %.3f\n", base_tax);

    if (surcharge > 0) {
        printf("Surcharge: %.3f\n", surcharge);
    }

    printf("Total Tax Payable: %.3f\n", total_tax);

    return 0;
}
