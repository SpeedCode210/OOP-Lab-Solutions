#include <bits/stdc++.h>
#include "account.h"
using namespace std;

signed main()
{
    PurchasesAccount acc1(200000);
    PurchasesAccount acc2(300000);

    PurchasesAccount::modifyDiscountRate(0.02);

    double discount1 = acc1.calculateMonthlyDiscount();
    double discount2 = acc2.calculateMonthlyDiscount();

    cout << "First : " << acc1.getPurchasesBalance() << '\n';
    cout << "Second : " << acc2.getPurchasesBalance() << '\n';

    PurchasesAccount::modifyDiscountRate(0.03);

    discount1 = acc1.calculateMonthlyDiscount();
    discount2 = acc2.calculateMonthlyDiscount();

    cout << "First : " << acc1.getPurchasesBalance() << '\n';
    cout << "Second : " << acc2.getPurchasesBalance() << '\n';
}