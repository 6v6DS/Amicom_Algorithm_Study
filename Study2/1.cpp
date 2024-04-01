#include <iostream>
#include <string>
#include <array>

using namespace std;


int main() {

    string S;
    int arr[26] = { 0 };

    cout << "단어를 입력하세요";
    cin >> S;


    for (int i = 'a'; i <= 'z'; i++) {
        cout << count(S.begin(), S.end(), i) << " ";
    }


    return 0;
}

