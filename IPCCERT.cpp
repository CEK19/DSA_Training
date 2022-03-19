#include <iostream>
using namespace std;

void solve(){
    int N, M, K;
    cin >> N >> M >> K;

    int result = 0;

    const int NUMBER_LECTURES = K;
    const int NUMBER_STUDENTS = N;
    const int TIME_LIMITS = 10;
    const int MIN_MINUTES = M;

    int T[NUMBER_STUDENTS][NUMBER_LECTURES];
    for(int i = 0; i < N; ++i) {
        int LEARNING_TIME   = 0;
        int ASK_TIME        = 0;

        for (int j = 0; j < NUMBER_LECTURES; ++j) {            
            cin >> T[i][j];
            LEARNING_TIME += T[i][j];
        }        
        int Q_i;
        cin >> Q_i;

        if (LEARNING_TIME >= MIN_MINUTES && Q_i <= TIME_LIMITS) ++result;        
    }
    cout << result;
}

int main() {
    solve();
	return 0;
}
