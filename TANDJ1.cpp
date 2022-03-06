#include <iostream>
using namespace std;

void solve(){
    int a, b, c, d, K;
    cin >> a  >> b >> c >> d >> K;

    int dist = abs(a - c) + abs(b - d);
    if(dist == K) {
        cout << "YES";
    }
    else if (K > dist && (K - dist) % 2 == 0){
        cout <<  "YES";
    }
    else  {
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
