#include <iostream>
using namespace std;

int getQuotient(int dividend, int divisor){

    int low = 1;
    int high = dividend;
    int ans = -1;

    if (divisor == 0)
        return -1;
    if (dividend == 0)
        return 0;
 
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(1LL * mid * divisor <= dividend){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return ans;
}

int getQuotientWithNegative(int dividend, int divisor){

    if (divisor == 0)
        return -1;
    if (dividend == 0)
        return 0;

    bool is_negative = (dividend < 0) ^ (divisor < 0);

    long long positive_dividend = llabs(dividend);
    long long positive_divisor = llabs(divisor);


    long long low = 0;
    long long high = positive_dividend;
    long long ans = -1;

 
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(mid * positive_divisor <= positive_dividend){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    if(is_negative)
        return ans = -ans;

    return ans;
}

int main(){

    int divisor;
    int dividend;

    cout << "ENTER DIVIDEND: ";
    cin >> dividend;
    cout << "ENTER DIVISOR: ";
    cin >> divisor;

    // int quotient = getQuotient(abs(dividend), abs(divisor));

    // if((dividend > 0 && divisor < 0 ) || (dividend < 0 && divisor > 0 )){
    //     quotient = 0 - quotient;
    // }

    int quotient = getQuotientWithNegative(dividend, divisor);
    cout << "QUOTIENT IS: " << quotient << endl;
}