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
        int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> d(n);
    read(a);
    read(b);
    for (int i = 0; i < n; i++)
        d[i] = a[i] - b[i];
    sort(d.begin(), d.end(), greater<int>());
    int s = 0;
    int ans = n;
    for (int i = 0; i < n; i++) {
        if (s + d[i] < 0) {
            ans = i;
            break;
        }
        s += d[i];
    }
    cout << ans << endl;
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