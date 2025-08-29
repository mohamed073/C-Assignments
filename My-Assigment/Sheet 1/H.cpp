#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
  double a, b;
  cin >> a >> b;
 
  double result = a / b;
  int floor_res = result;
  int ceil_res = result - (int)result == 0 ? result : result + 1;
  int round_res = result - (int)result >= 0.5 ? ceil_res : floor_res;
  cout << "floor " << a << " / " << b << " = " << floor_res << "\n";
  cout << "ceil " << a << " / " << b << " = " << ceil_res << "\n";
  cout << "round " << a << " / " << b << " = " << round_res << "\n";
    return 0;
}