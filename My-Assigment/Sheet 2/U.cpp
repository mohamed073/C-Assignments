#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int total_sum = 0;
 
    for (int num = 1; num <= n; ++num) {
        int temp_num = num;
        int sum = 0;
        while(temp_num != 0) {
            int las_digit = temp_num % 10;
            sum += las_digit;
            temp_num /= 10;
        }
        if (sum >= a && sum <= b)
            total_sum += num;
    }
    cout << total_sum << "\n";
 
    return 0;
}