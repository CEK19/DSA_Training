#include <iostream>
using namespace std;

void solve(){
    int A[3], B[3];
    cin >> A[0] >> B[0] >> A[1] >> B[1] >> A[2] >> B[2];

    bool FT[2]   =  {false, false};
    if (A[0] == A[1] || A[0] == B[1]) {
        FT[0] = true;
    }
    if (B[0] == A[1]|| B[0] == B[1]) {
        FT[1] = true;
    }

    if (FT[0] == true && FT[1] == true) {
        cout << 1;
        return;
    }
    
    FT[0] = false;
    FT[1] = false;
    
    if (A[0] == A[2] || A[0] == B[2]) {
        FT[0] = true;
    }
    if (B[0] == A[2]|| B[0] == B[2]) {
        FT[1] = true;
    }    
    if (FT[0] == true && FT[1] == true) {
        cout << 2;
        return;
    }    

    cout << 0;
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
