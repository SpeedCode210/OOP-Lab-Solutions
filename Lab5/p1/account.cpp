#include "account.h"

double PurchasesAccount::annualDiscountRate;

PurchasesAccount::PurchasesAccount(double balance) : purchasesBalance(balance)
{
}

double PurchasesAccount::calculateMonthlyDiscount()
{
    double d = purchasesBalance*annualDiscountRate/12.0;
    purchasesBalance -= d;
    return d;
}

void PurchasesAccount::modifyDiscountRate(double rate)
{
    annualDiscountRate = rate;
}

double PurchasesAccount::getPurchasesBalance()
{
    return purchasesBalance;
}
