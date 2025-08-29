#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int end_str = s.find("\\");

    cout << s.substr(0,end_str) << "\n";

    return 0;
}
