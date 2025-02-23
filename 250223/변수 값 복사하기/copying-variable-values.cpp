#include <iostream>
using namespace std;

int main() {
    // a = b = c = 0 이라는 코드를 통해 a, b, c값을 동시에 전부 0으로 바꿔줄 수도 있습니다.
    int a = 1, b = 2, c = 3;
    a = b = c;

    cout << a << " " << b << " " << c << endl;
    return 0;
}