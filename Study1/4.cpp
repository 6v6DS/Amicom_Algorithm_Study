#include <iostream>
#include <string>
#include <array>

using namespace std;

int func4(int N) {

    int score = 1;

    for (int i = 1; score * 2 <= N; i++) {
        score *= 2;
    }

    return score;

}

int main() {

    int N;
    int score;

    cout << "수를 입력하세요";
    cin >> N;

    score = func4(N);

    cout << score;

    return 0;
}
