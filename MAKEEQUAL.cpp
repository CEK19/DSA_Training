#include <iostream>
using namespace std;

void solve(){
    int N;
    cin >> N;
    const int number = N;
    int A[number];

    for(int index = 0; index  < number; ++index) {
        cin >> A[index];
    }

    int MAX = -1;
    for (int index = 0; index < number;  ++index) {
        if (MAX < A[index]) {
            MAX = A[index];
        }
    }

    int MIN = 100001;
    for (int index = 0; index < number; ++index) {
        if (MIN > A[index]) {
            MIN = A[index];
        }
    }
    cout << MAX - MIN;
}

int main() {
	int T;
	cin >>  T;
	
	for  (int t = 0; t < T; ++t){
	    solve();
	    cout << endl;
	}
	return 0;
}
