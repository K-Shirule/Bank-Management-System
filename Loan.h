#ifndef LOAN
#define LOAN

class Loan
{
    private:

    float interest_rate;
    float principal;
    float balance;
    int years;
    float total_interest;
    float total_amount;
    float monthly_payment;

    public:
    
    Loan(float amount, float years);
    float calculate_total_interest();
    float calclate_total_amount();
    float calculate_interest_rate();
};

#endif