#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

	int N;
	cout << "명령할 개수를 입력하세요";
	cin >> N;

	stack <int> T;

	for (int i = 0; i < N; i++) {

		string S;
		cin >> S;


		if (S == "push") {
			int t;
			cin >> t;
			T.push(t);
		}
		else if (S == "pop") {
			if (T.empty()) {
				cout << -1 << "\n";
			}
			else {

				cout << T.top() << "\n";
				T.pop();
			}
		}
		else if (S == "size") {
			cout << T.size() << "\n";
		}
		else if (S == "empty") {
			if (T.empty()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (S == "top") {
			if (T.empty()) {
				cout << -1 << "\n";
			}else
			cout << T.top() << "\n";
		}

	}

	return 0;

}
