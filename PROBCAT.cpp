#include <iostream>
using namespace std;

void solve(){
    int x;
    cin >> x;
    if (1 <= x && x < 100) {
        cout << "Easy";
    }
    else if (x >= 100 && x < 200) {
        cout << "Medium";
    }
    else if (200 <= x && x <= 300) {
        cout << "Hard";
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
