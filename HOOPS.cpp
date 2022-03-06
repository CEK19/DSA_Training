#include <iostream>
using namespace std;

void solve(){
    int N;
    cin >> N;
    cout << int(N/2) + 1;
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
