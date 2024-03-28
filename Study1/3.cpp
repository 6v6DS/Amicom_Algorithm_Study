#include <iostream>
#include <string>
#include <array>

using namespace std;

int func3(int N) {

    int score = 0;
    
    if (sqrt(N) * sqrt(N) == N) {
        score = 1;
    }

    return score;
}

int main(){
    
    int N;
    int score;

    cout << "제곱수를 입력하세요";
    cin >> N;
   
    score = func3(N);

    cout << score;

    return 0;
}
