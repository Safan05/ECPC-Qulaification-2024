#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <cstdio>
#include <cstring>
#include <queue>
#include <cstdlib>
#include <algorithm>
#include <list>
#include <string>
#include <cmath>
#include <bitset>
#include <stack>
#include<iomanip>
#include <math.h>
using namespace std;
#define int long long
#define endl "\n"
#define read(a) for(auto &i: a) cin>>i
#define write(a) for(auto &i: a) cout<<i<<" "
#define SuperSafan ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#pragma warning(suppress : 4996)
#define pi 3.14159265359
#define M (1000000007)
signed main() {
    // freopen("mex.in", "r", stdin);
   // freopen("mex.in", "r", stdout);
    SuperSafan
        int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n;
        string s;
        cin >> s >> q;
        int p = 0;
        for (int i = 0; i < q; i++) {
            int x, z;
            cin >> z >> x;
            if (z == 1) {
                p = (p + x) % n;
            }
            else
                cout << s[(p + x - 1) % n] << endl;
        }

    }
}
/*
1
10 2 3
5 2 1 3 4 3 2 1 7 8
*/
/*
5 1 1
1 2 10
1 3 4
2 3 8
2 4 10
3 4 2
4 5 5
01:55
*/