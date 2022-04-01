#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int sz = 1e5 + 10;

int main() {
    #ifdef LU_SERIOUS
        freopen( "in.txt", "r", stdin );
    #endif // LU_SERIOUS
    int n1,n2,n3,n4,n5,n6,bug,a1,a2,a3,a4,a5,a6,t,sum,bil,cs = 0;
    scanf("%d",&t);
    while (t--) {
        cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
        cin >> bug;
        cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
        sum = n1 + n2 + n3 + n4 + n5 + n6;
        bil = a1 + a2 + a3 + a4 + a5 + a6;
        printf ("Case %d: ",++cs);
        int ans = bil - (bug - sum);
        if (ans >= 0) cout << ans << endl;
        else cout << 0 << endl;
    }
    return 0;
}