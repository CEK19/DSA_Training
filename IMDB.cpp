#include <iostream>
#include <math.h>

using namespace std;

void solve(){
    int N, X;
    cin >> N >> X;
    int S[N], R[N];

    int max_R = -1;
    for (int i = 0; i < N; ++i){
        cin >> S[i] >> R[i];
        if (max_R < R[i] && S[i] <= X){
            max_R = R[i];
        }
    }
    cout << max_R;
}

int main() {
    int T;
    cin >> T;
    for  (int t = 0; t < T; ++t) {
        solve();
        cout << endl;
    }
    return 0;
}