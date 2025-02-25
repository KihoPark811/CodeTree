#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double N;
    cin >> N;

    // 정수 부분 포함해서 소수점 특정 자리까지 반올림한다.
    cout.precision(4); 
    cout << N;
    return 0;
}