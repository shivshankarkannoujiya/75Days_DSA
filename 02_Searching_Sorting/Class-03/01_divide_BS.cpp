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

int main(){

    int divisor;
    int dividend;

    cout << "ENTER DIVIDEND: ";
    cin >> dividend;
    cout << "ENTER DIVISOR: ";
    cin >> divisor;

    int quotient = getQuotient(dividend, divisor);
    cout << "QUOTIENT IS: " << quotient << endl;
}