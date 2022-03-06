#include <iostream>
using namespace std;

void solve(){
    int N;
    cin >> N;
    
    int sum = N*(N + 1)/2;
    if (sum % 2 == 0) {
        cout << N;
    }
    else{
        cout << N - 1;
    }
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
