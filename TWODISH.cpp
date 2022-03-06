#include <iostream>
using namespace std;

void solve(){
    int GUESTS, FRUITS, VEGS, FISHES;
    cin >> GUESTS >> FRUITS >> VEGS >> FISHES;

    int FIRST_TYPE = 0, SECOND_TYPE = 0;
    FIRST_TYPE = FRUITS - VEGS > 0 ? VEGS : FRUITS;
    VEGS = VEGS - FIRST_TYPE;
    SECOND_TYPE = FISHES - VEGS > 0 ? VEGS : FISHES;
    if (FIRST_TYPE + SECOND_TYPE >= GUESTS) {
        cout << "YES";
    }
    else {
        cout << "NO";
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
