#include <iostream>
#include <math.h>

using namespace std;

void solve(){
    int N, S;
    cin >> N >> S;
    if (S <= N) {
        cout << S;
    } 
    else {
        cout << N - (S-N);
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    for  (int t = 0; t < T; ++t) {
        solve();
    }
    return 0;
}