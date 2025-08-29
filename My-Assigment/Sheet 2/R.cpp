#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
 
    int n,m;
    int min_val = INT_MAX;
    int max_val = INT_MIN;
 
 
    while(true){
        int sum = 0;
        cin >> n >> m;
 
        if (!(n > 0 && m > 0))
            break;
 
        min_val = n <= m ? n : m;
        max_val = n >= m ? n : m;
 
        for (int i = min_val; i <= max_val; ++i){
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << "\n";
 
    }
 
 
    return 0;
}