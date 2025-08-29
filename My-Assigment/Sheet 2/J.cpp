#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    bool is_prime = true;
 
    for (int num = 2; num <= n; num++) {
 
        for (int i = num - 1; i > 1; i-- ) {
                if (num % i == 0){
                    is_prime = false;
                    break;
                }
            }
 
            if(is_prime)
                cout << num <<" ";
            is_prime = true;
 
        }
 
    return 0;
}