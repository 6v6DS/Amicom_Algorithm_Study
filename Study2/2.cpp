#include <iostream>
#include <string>
#include <array>
#include <stack>

using namespace std;


int main() {

    string S;
    cout << "단어를 입력하세요";
    cin >> S;

    stack<char> n;
    stack<char> r;

    for (int i = 0; i < S.size(); i++) {
        n.push(S[i]);
    }

    int num;
    cout << "입력할 명령어의 개수를 입력하세요";
    cin >> num;

    while(num--){
        char tmp;
        cin >> tmp;
        if(tmp == 'P') {
            char c;
            cin >> c;
            n.push(c);
        }
        else if(tmp== 'L') {
            if(n.empty()) continue;
            else{
                r.push(n.top());
                n.pop();
            }
        }
        else if (tmp == 'B') {
            if(n.empty()) continue;
            else n.pop();
        }
        else if (tmp== 'D') {
            if (r.empty()) continue;
            else {
                n.push(r.top());
                r.pop();
            }
        }
    }

    while(!n.empty()) {
        r.push(n.top());
        n.pop();
    }

    while(!r.empty()) {
        cout << r.top();
        r.pop();
    }

    return 0;
}
