#include <iostream>
using namespace std;

void solve(){
    int A, B ,X;
    cin >> A >> B >> X;
    cout << (B-A)/X;
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
