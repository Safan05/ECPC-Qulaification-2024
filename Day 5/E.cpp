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
        int n;
        cin >> n;
        bool f = 0;
        for (int i = 1; i < 64; i++) {
            int nodes = (1LL << i) - 1;
            int add = n - nodes;
            if (add < 1)
                break;
            for (int j = 64; j >= 1; j--) {
                if (j == i)
                    continue;
                if ((1LL << j) - 1 == add && (i - j) > 0) {
                    cout << i - j << endl;
                    f = 1;
                    break;
                }
            }
            if (f)
                break;
        }
        if (f == 0)
            cout << -1 << endl;
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