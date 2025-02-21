#include <iostream>
using namespace std;

int main() {
    // cout << fixed와 cout.precision(n)을 같이 사용하면
    // 변수에 저장된 실수값(소수점)을 고정시키고,
    // 그 상태에서 소수점 자리 이하를 n만큼 저장한다.
    
    cout << fixed;
    cout.precision(1);
    double a_ft = 30.48;
    int b_mi = 160934;

    cout << 9.2 << "ft" << " = " << a_ft*9.2 << "cm" << endl;
    cout << 1.3 << "mi" << " = " << b_mi*1.3 << "cm" << endl;

    return 0;
}