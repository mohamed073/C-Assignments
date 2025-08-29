#include <iostream>
#include <iomanip>
#include <math.h>
 
 
 
using namespace std;
 
int main(){
 
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
 
  a %= 100;
  b %= 100;
  c %= 100;
  d %= 100;
  long long mult = (a * b) % 100;
  mult = (mult * c) % 100;
  mult = (mult * d) % 100;
 
  if (mult < 10)
    cout << 0;
  cout << mult <<"\n"; //69
    return 0;
}