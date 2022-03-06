#include <iostream>
using namespace std;

int min_func(int x, int y) {
    if (x < y) {
        return x;
    }
    return y;    
}

void solve(){
    int A, B, C;
    cin >>  A >> B >> C;    
    int min_num = min_func(min_func(min_func(A, B), min_func(B, C)), min_func(A, C));
    cout <<  (A + B + C) -  min_num;
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
