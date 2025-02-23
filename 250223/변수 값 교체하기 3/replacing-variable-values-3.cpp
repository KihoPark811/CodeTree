#include <iostream>
using namespace std;

int main() {
    // temp : 두 변수 값을 교환 
    int a = 3;
    int b = 5;
    int temp = 0;

    temp = a;
    a = b;
    b = temp;

    cout << a << endl;
    cout << b << endl;
    return 0;
}