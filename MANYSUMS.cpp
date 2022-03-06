#include <iostream>
using namespace std;

void solve(){
    int L, R;
    cin >> L >> R;
    cout << 2*(R-L) + 1;
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
