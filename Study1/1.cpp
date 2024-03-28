#include <iostream>

using namespace std;

int func1(int n) {
    int sum = 0; 

    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 || i % 3 == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int n;

    cout << "수를 입력하세요: ";
    cin >> n;

    int result = func1(n);

    cout << result << endl;

    return 0;
}
