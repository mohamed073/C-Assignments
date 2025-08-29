#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
 
    int a;
    int b;
 
    char s;
    cin >> a >> s >> b;
 
    if (s == '+')
        cout << a+b;
    else if (s == '-')
        cout << a-b;
    else if (s == '*')
        cout << a*b;
    else if (s == '/')
        cout << a/b;
    else{}
 
 
 
    return 0;
}
