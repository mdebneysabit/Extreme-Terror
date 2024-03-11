#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T,t=1;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        int Xi[N], Yi[N],P[N];

        for (int i = 0; i < N; ++i) {
            cin >> Xi[i];
        }

        for (int i = 0; i < N; ++i) {
            cin >> Yi[i];
        }

        for (int i = 0; i < N; ++i) {
            P[i]=Yi[i]-Xi[i];
        }
        sort(P,P+N);

        long long totalProfit = 0;
     
        for (int i = 0; i < N; ++i) {
            if(P[i]<=0){
                if(K){
                    K--;
                    continue;
                }
            }
            totalProfit+=P[i];
        }

        if (totalProfit <= 0) {
            cout <<"Case "<<t++<<": "<< "No Profit" << endl;
        } else {
            cout <<"Case "<<t++<<": "<< totalProfit << endl;
        }
    }

    return 0;
}

