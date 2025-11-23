#include <iostream>
#include <vector>
using namespace std;

int sqrtBruteForceWay(int n){
    int ans = 1;
    for (int i = 1; i <= n; i++){
        if(i * i <= n){
            ans = i;
        }else{
            // i * i > n
            break;
        }
    }
    return ans;
}

int sqrt(int x){
    int low = 0;
    int high = x;
    int ans = 1;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if((mid * mid) <= x){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return ans;
}


int main(){

    int n;
    cout << "ENTER VALUE: ";
    cin >> n;

    // int sqrt = sqrtBruteForceWay(n);
    int ans = sqrt(n);
    cout << "SQRT IS: " << ans << endl;
}