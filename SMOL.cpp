#include <iostream>
using namespace std;

void solve(){
    int N, K;
    cin >> N >> K;
    if (N < K || K == 0) {
        cout << N;
    }
    else {
        int div = N/K;
        N -= div*K;
        cout << N;
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