#include <iostream>
using namespace std;

void solve(){
    long N, K;
    cin >> N >> K;
    int A[N];
    int sum = 0;
    for(int index = 0;  index  < N; ++index) {
        cin >> A[index];
        sum = sum  + A[index];
    }
    cout << sum % K;
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
