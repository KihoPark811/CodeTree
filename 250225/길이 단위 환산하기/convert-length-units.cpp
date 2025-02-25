#include <iostream>
using namespace std;

int main() {
    double ft = 0;
    double cm = 30.48;
    double result = 0;
    cin >> ft;
  
    result = ft * cm;

    cout << fixed;
    cout.precision(1);
    cout << result;

    return 0;
}