#include <iostream>
using namespace std;

void solve(){
    int N, P, X, Y;
    cin >> N >> P >> X >> Y;

	const int NUMBER = N;
	int A[NUMBER];
    
	for(int index = 0; index < NUMBER; ++index) {
		cin >> A[index];
	}

	int minutes = 0;
	for(int index = 0; index < P; ++index) {
		if (A[index] == 0) {
			minutes += X;
		}
		else 
			minutes += Y;
	}
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
