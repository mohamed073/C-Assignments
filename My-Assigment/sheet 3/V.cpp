// V. Frequency Array
#include <iostream>
using namespace std;

int main() {
    unsigned int n, m;
    cin >> n >> m;
    unsigned int arr[m + 1] {0};

   unsigned int idx;
   for (unsigned int i = 0; i < n; ++i) {
    cin >> idx;
    arr[idx]++;
   }

   for (unsigned int idx = 1; idx < m + 1; ++idx)
    cout << arr[idx] << "\n";

    return 0;
}
