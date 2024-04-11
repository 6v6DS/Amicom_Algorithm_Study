#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {

	int N;
	cout << "명령할 개수를 입력하세요";
	cin >> N;

	if (N <= 1 || N >= 10000) {
		cout << "명령의 개수는 1이상 10000이하여야 합니다";
	}

	deque<int> T;

	for (int i = 0; i < N; i++) {

		string S;
		cin >> S;


		if (S == "push_front") {
			int t;
			cin >> t;
			T.push_front(t);
		}
		else if (S == "push_back") {
			int t;
			cin >> t;
			T.push_back(t);
		}
		else if (S == "pop_front") {
			if (T.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << T.front() << "\n";
				T.pop_front();
			}
		}
		else if (S == "pop_back") {
			if (T.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << T.back() << "\n";
				T.pop_back();
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
		else if (S == "front") {
			if (T.empty()) {
				cout << -1 << "\n";
			}
			else
				cout << T.front() << "\n";

		}
		else if (S == "back") {
			if (T.empty()) {
				cout << -1 << "\n";
			}
			else
				cout << T.back() << "\n";
		}

	}

	return 0;

}
