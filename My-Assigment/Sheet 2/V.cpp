#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
  int n;
  cin >> n;
 
  for (int i = 0; i < n; ++i) {
    int cnt = 1;
    for (int j = (4 * i) + 1;  ; ++cnt,++j) {
        if (cnt % 4 == 0) {
            cout << "PUM";
            break;
        }
        cout << j << " ";
    }
    cout << "\n";
  }
    return 0;
}
 