#include <iostream>
using namespace std;

int main() {
    unsigned short n,m;
    cin >> n >> m;
    unsigned long long a[n];
    unsigned long long b[m];

    for (unsigned long long i = 0; i < n; ++i)
        cin >> a[i];

    for (unsigned long long i = 0; i < m; ++i)
        cin >> b[i];


   bool is_sub = false;
   static unsigned long long j = 0;
   unsigned long long i = 0;

   for (i = 0; i < m; ++i) { // original-array
        is_sub = false;
        for ( ; j < n; ++j) {  // sub-array
            if (b[i] == a[j]){
                is_sub = true;
                ++j;
                break;
            }
        }
        if (!is_sub)
            break;
    }

    if (!is_sub)
        cout << "NO\n";
    else
        cout << "YES\n";



    return 0;
}
