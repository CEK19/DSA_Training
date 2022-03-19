#include <iostream>
using namespace std;

void solve(){
    int N;
    cin >> N;
    int f[N];

    for (int index = 0; index < N; ++index) {
        cin >> f[index];
    }

    int initalVal = f[0];
    f[0] = 0;
    int distance = 0;
    int index = 0;
    
    while(initalVal != 0) {        
        index = (index + 1) % N;
        distance = distance + 1;
        initalVal = initalVal - 1 + f[index];
        f[index] = 0;
    }

    cout << distance;
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
