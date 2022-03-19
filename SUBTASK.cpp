#include <iostream>
using namespace std;


// 1) If Chef’s code passes all the N test cases, he gets 100 points.

// 2) If Chef’s code does not pass all the test cases, but passes all the first M(M<N) test cases, he gets K(K<100) points.

// 3) If the conditions 1 and 2 are not satisfied, Chef does not get any points (i.e his score remains at 0 points).

void solve(){
    int N, M, K;
    cin >> N >> M >> K;

    int A[N];
    for (int index = 0; index < N; ++index) {
        cin >>  A[index];
    }

    for (int index  = 0; index < N; ++index) {
        if (index < M) {
            if (A[index] == 0) {
                cout << 0;
                return;
            }
        }
        
        else {
            if (A[index] == 0) {
                cout << K;
                return;
            }
        }
    }

    cout << 100; 
    return;
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
