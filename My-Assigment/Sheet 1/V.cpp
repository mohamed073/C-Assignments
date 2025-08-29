#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
   int a,b;
   char s;
 
   cin >> a >> s >> b;
 
   bool result = true;
 
   if (s == '=')
    result = a == b;
   else if (s == '>')
    result = a > b;
   else if (s == '<')
    result = a < b;
 
   if (result)
    cout << "Right\n";
   else
    cout << "Wrong\n";
 
 
    return 0;
}