#include <iostream>
using namespace std;

void solve(){
    int N;
    cin >> N;
    int A[N];    

    int result = 0;
    int tmp = 0;

    for(int index = 0; index < N; ++index) {
        cin >> A[index];
    }

    for(int index  = 0; index < N; ++index) {
        if (A[index] <= 7) ++tmp;
        ++result;
        if(tmp == 7) {
            break;
        }                
    }
    cout << result;
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
