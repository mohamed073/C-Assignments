#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
    char s;
    int n;
    int x;
    cin >>s;
    cin >> n;
 
    for (int i = 0; i < n; i++) {
        cin >> x;
        for (int j = 0; j < x; j++)
            cout << s;
        cout <<"\n";
    }
 
    return 0;
}