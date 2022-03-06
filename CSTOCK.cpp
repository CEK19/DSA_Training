#include <iostream>
using namespace std;

void solve(){
    int S, A, B, C;
    cin >> S >> A >> B >>  C;    
    float PRICE = S + (S*1.0/100)*C;
    if (A <= PRICE && PRICE <= B) {
        cout << "YES";
        return;
    }
    cout << "NO";
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
