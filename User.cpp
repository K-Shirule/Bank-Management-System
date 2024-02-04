#include "User.h"

//Default Constructor
User::User()
{
    account_id = 0;
    balance = 0.0;
    name = "";
    address = "";
    ssn = "";
    secret_question = "";
    answer = "";
        
    loan = nullptr;
    cd = nullptr;    
}

//Parameterized Constructor
User::User(int account_id, float balance, std::string name, std::string address, int ssn, std::string secret_question, std::string answer)
{
    this->account_id = account_id;
    this->balance = balance;
    this->name = name;
    this->address = address;
    this->ssn = ssn;
    this->secret_question = secret_question;
    this->answer = answer;

    loan = nullptr;
    cd = nullptr;    
}

bool User::withdraw_money(float amount)
{
    if(check_balance() > amount)
    {
        balance = balance - amount;
        return true;
    }
    else
        return false;
}

void User::deposit_money(float amount)
{
    balance = balance + amount;
}

float User::check_balance()
{
    return this->balance;
}

void Take_Loan()
{
    
}

void Create_CD()
{

}