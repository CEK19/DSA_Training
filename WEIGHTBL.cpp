#include <iostream>
using namespace std;

void solve(){
    const int FAULT = 0;
    const int OKAY = 1;
    int w1, w2, x1, x2, M;
    cin >> w1 >> w2 >> x1 >> x2 >> M;

    int delta_W = w2 - w1;
    int left_itv = x1*M, right_itv = x2*M;
    if (delta_W >= left_itv  && delta_W <= right_itv) {
        cout << OKAY;
        return;
    }
    cout << FAULT;
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
