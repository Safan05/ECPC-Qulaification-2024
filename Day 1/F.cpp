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
#include <math.h>
using namespace std;
#define int long long
#define endl "\n"
#define read(a) for(auto &i: a) cin>>i
#define write(a) for(auto &i: a) cout<<i<<" "
#define SuperSafan ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#pragma warning(suppress : 4996)
map<int, int> prime;
void primes(vector<int>&a) {
    int n = a.size();
    for (int i = 0; i < n; i++) {
        int x = a[i];
        for (int j = 2; j * j <= x; j++) {
            int cnt = 0;
            while (x % j == 0) {
                x /= j;
                cnt++;
            }
            prime[j] += cnt;
        }
        if (x > 1)
            prime[x] += 1;
    }
}
signed main() {
    // freopen("mex.in", "r", stdin);
   // freopen("mex.in", "r", stdout);
    SuperSafan
        int n, k;
    cin >> n >> k;
    vector<int> a(n);
    read(a);
    primes(a);
    bool f = 1;
    for (auto& i : prime) {
        if ((i.second % k) != 0)
            f = 0;
    }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
*/