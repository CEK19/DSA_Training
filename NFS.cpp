#include <iostream>
#include <math.h>
using namespace std;

void solve(){
    int U, V, A, S;
    cin >> U >> V >> A >> S;

    double VELO_CAL = sqrt(U*U - 2*A*S);
    if (VELO_CAL > V) {
        cout << "NO";
    }
    else {
        cout << "YES";
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
