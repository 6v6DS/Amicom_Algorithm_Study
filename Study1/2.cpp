#include <iostream>
#include <string>
#include <array>

using namespace std;

int func2(int arr[], int N) {
    int score = 0;
    int i = 0;

    //두 값의 합이 100이면 1
    for ( i = 0; i < N-1; i++) {
        for (int j = i + 1; j < N; j++){
            if (arr[i] + arr[j] == 100) {
                score = 1;
                return score;
            }
        }
    }


}

int main(){
    
    int arr[1000];
    int score;
    //int N;
    int N;
    //입력받고
    int i = 0;

    cout << "배열의 크기를 입력하세요";
    cin >> N;

    cout << "배열의 원소를 입력하세요 ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] >= 100) {
            cout << "배열의 원소는 0 이상 100 이하여야 합니다." << endl;
            return 1;
        }
    }

    //함수 호출
    score = func2(arr, N);

    cout << score;

    //return
    return 0;
}
