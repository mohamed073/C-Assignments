#include <iostream>
using namespace std;

int main() {
   long long n;
   cin >> n;
   
   long long num;
   long long sum = 0;

   for (int i = 0; i < n; ++i) {
    cin >> num;
    sum += num;
   }

   if (sum < 0)
    cout << -1 * sum << "\n";
   else
    cout << sum << "\n";

    return 0;
}
