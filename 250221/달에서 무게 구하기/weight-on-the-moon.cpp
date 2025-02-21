#include <iostream>
using namespace std;

int main() {
    // cout << fixed : 소수점 자리 표현을 고정
    // cout.precision(n) : 소수점 n번째 자리까지 표현

    cout << fixed;
    cout.precision(6);
    int chu = 13;
    double moon = 0.165000;

    cout << chu << " * " << moon << " = " << chu * moon;

    return 0;
}