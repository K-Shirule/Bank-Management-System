#ifndef User
#define User

class User
{
    private:
        int account_id;
        float balance;
        std::string name;
        std::string address;
        int ssn;
        std::string secret_question;
        std::string answer;
        
        Loan* loan;
        CD* cd;
        
    public:
        bool withdraw_money(float amount);
        void deposit_money(float amount);
        float check_balance() const;
        void Take_Loan();
        void Create_CD();

        User();
        User(int account_id, float balance, std::string name, std::string address, int ssn, std::string secret_question,
        std::string answer);

};

#endif