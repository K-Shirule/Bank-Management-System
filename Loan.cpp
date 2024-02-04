#include "Loan.h"

Loan::Loan(float amount, float years)
{
    principal = amount;
    this->years = years;
    balance = amount;
    this->interest_rate = calculate_interest_rate();
}

void Loan::calculate_total_interest()
{
    monthly_payment = principal * (interest_rate/12) * (((1+(interest_rate/12))^(12*years))/(((1+(interest_rate/12))^(12*years))-1));
    total_amount = monthly_payment* 12 * years;
    total_interest = total_amount - principal;
}

float Loan::calculate_interest_rate()
{
    if(years == 30)
    {
        return 7.5;
    }
    else if(years == 20)
    {
        return 7.1;
    }
    else
    {
        return 6.5;
    }
}