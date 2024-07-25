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
void fact(int x, map<int, int>& m) {
    for (int i = 2; i * i <= x; i++) {
        while (x % i == 0) {
            x /= i;
            m[i] += 1;
        }
    }
    if (x > 1)
        m[x]++;
}

signed main() {
    // freopen("mex.in", "r", stdin);
   // freopen("mex.in", "r", stdout);
    SuperSafan

    int n, q,v=1;
    cin >> n >> q;
    map<int, int> m;
    for (int i = 2; i <= n; i++)
        fact(i, m);
    for (int i = 0; i < q; i++) {
        int t, x;
        cin >> t >> x;
        if (t == 1) {
            fact(x, m);
        }
        else {
            map<int, int> m2;
            fact(x, m2);
            int mi = INT_MAX;
            int z = 0;
            for (auto& it : m2) {
                if (((m[it.first]) / (it.second)) < mi) {
                    mi = min((m[it.first])/it.second, mi);
                    z = it.first;
                }
            }
            cout << mi<<endl;
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