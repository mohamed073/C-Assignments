#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main(){
    long n;
    cin >>n;
 
    long years = n / 365;
    long months = (n % 365) / 30;
    long days = n - ((years *365) +(months * 30));
 
    cout << years << " years\n"
         << months << " months\n"
         << days << " days\n";
 
 
    return 0;
}