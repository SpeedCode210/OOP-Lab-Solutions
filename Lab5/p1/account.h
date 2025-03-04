#ifndef H_ACCOUNT
#define H_ACCOUNT

class PurchasesAccount
{
public:
    PurchasesAccount(double balance = 0);
    double calculateMonthlyDiscount();
    static void modifyDiscountRate(double rate);
    double getPurchasesBalance();
private:
    static double annualDiscountRate;
    double purchasesBalance;
};

#endif