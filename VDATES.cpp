#include <iostream>
using namespace std;

void solve(){
    int D, L, R;
    cin >> D >> L >> R;
    if (D > R) {
        cout << "Too Late";
    }
    else if (D <= R && D > L){
        cout << "Take second dose now";
    }
    else {
        cout << "Too Early";
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
