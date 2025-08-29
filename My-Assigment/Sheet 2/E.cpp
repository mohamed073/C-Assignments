#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
    long x;
    long max_num = LONG_MIN;
 
    while(n--){
        cin >> x;
        if (max_num < x)
            max_num = x;
    }
 
    cout << max_num;
 
    return 0;
}