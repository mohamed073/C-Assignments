//Y. Range sum query
#include <iostream>
using namespace std;

int main() {
    unsigned long n, q;
    cin >> n >> q;
    unsigned long long arr[n];

    unsigned int i;
    for (i = 0; i < n; ++i) {
        cin >> arr[i];
        if ( i != 0)
            arr[i] = arr[i] + arr[i-1];
    }

    unsigned int l,r;
    while(q--) {
        cin >> l >> r;
        l--;
        r--;
        
        if (l == 0)
            cout << arr[r] << "\n";

        else
        cout << arr[r] - arr[l-1] << "\n";
    }



    return 0;
}
