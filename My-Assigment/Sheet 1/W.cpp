#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
   int a,b;
   long c;
   char s;
   char q;
 
   cin >> a >> s >> b >> q >> c;
 
   bool is_true = true;
   long result = 0;
 
   if (s == '+'){
    is_true = (a + b == c);
    result = a + b;
   }
 
   else if (s == '-'){
    is_true = (a - b == c);
        result = a - b;
   }
 
   else if (s == '*'){
    is_true = (a * b == c);;
    result = a * b;
   }
 
   if (is_true)
    cout << "Yes\n";
   else
    cout << result <<'\n';
 
 
    return 0;
}
 