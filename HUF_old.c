/*
** HUF Income Tax Calculator (Old Tax Regime)
**
** Disclaimer:
** This code is intended to provide a basic calculation of income tax for Hindu Undivided Family (HUF)
** under the OLD tax regime in India. It may not account for all specific deductions, exemptions,
** and complexities of the Indian Income Tax Act.
**
** For accurate and up-to-date tax calculations, please consult with a tax professional or refer to the
** official website of the Income Tax Department of India.
*/

#include <stdio.h>

float calculate_base_tax(int income) {
    float tax = 0.0;

    if (income > 250000 && income <= 500000) {
        tax = 0.05 * (income - 250000);
    } else if (income > 500000 && income <= 1000000) {
        tax = 12500 + 0.2 * (income - 500000);
    } else if (income > 1000000) {
        tax = 112500 + 0.3 * (income - 1000000);
    }

    return tax;
}

float calculate_surcharge(int income, float base_tax) {
    float surcharge = 0.0;

    if (income > 500000 && income <= 1000000) {
        surcharge = 0.1 * base_tax;
    } else if (income > 1000000 && income <= 2000000) {
        surcharge = 0.15 * base_tax;
    } else if (income > 2000000 && income <= 5000000) {
        surcharge = 0.25 * base_tax;
    } else if (income > 5000000) {
        surcharge = 0.37 * base_tax;
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

    if (income <= 250000) {
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