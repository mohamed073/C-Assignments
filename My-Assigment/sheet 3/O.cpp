// O. Fibonacci
#include <iostream>
#include <string.h>
using namespace std;

int main() {

   unsigned short n;
   cin >> n;
   unsigned  long long arr[n];

   arr[0] = 0;
   arr[1] = 1;
   for (unsigned short i = 2; i <= n; ++i)
    arr[i] = arr[i - 1] + arr[i - 2];

   cout << arr[n-1] << "\n";

    return 0;
}
