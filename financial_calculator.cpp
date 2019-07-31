#include <iostream>

using namespace std;

int main()
{
int amtloanI   =1000;
int amtloan    =amtloanI;
int amtpay     =00;
int amtpayaccu =0;

int count1     =1;
int countlmt   =12;

int ppy        =12;                 // periods per year
int ppypay     =12;
int ppyint     =3;

float intrate  =15;                 // APR expressed as a percent
float intratepp=intrate/ppy/100;    // per period interest rate as decimal

intratepp=intratepp*(ppy/ppyint);   // interest rate accumulator formula

cout << "original balance: " << amtloanI << "\n";
cout << "payments are    : " << amtpay << "\n\n";

do
{
    cout << "pay period is: " << count1 << "\n";
    if (count1%(ppy/ppyint)==0)
        {
        amtloan=amtloan+(amtloan*intratepp); // increase loan by applying interest
        cout << "    current balance is: " << amtloan << "\n";
        }
    if (count1%(ppy/ppypay)==0)
        {
        if (amtloan<=amtpay) amtpay=amtloan; // reduce loan by applying payment
        amtloan=amtloan-amtpay;
        amtpayaccu=amtpayaccu+amtpay;
        cout << "    " << amtpay << " payment this period\n";
        }
    else
        cout << "    NO payment this period\n";

    count1=count1+1;
}while(count1<=countlmt && amtloan>0);

cout << "\n\n";
cout << "after " << (count1-1) << " payments\n";
cout << "your final balance is: " << amtloan <<"\n";
cout << "you paid: " << amtpayaccu << " in total\n";
cout << "you paid: " << amtpayaccu-amtloanI << " in interest\n";

return 0;
}
