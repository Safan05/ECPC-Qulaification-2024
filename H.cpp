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
struct segmentTree {
#define L (2*node+1)
#define R (2*node+1)
#define mid ((l+r)/2)
private:
    int size;
    vector<int> seg;
    void build(vector<int>& a, int l, int r, int node) {
        if (l == r) {
            if (l < a.size()) {
                seg[node] = a[l];
                return;
            }
        }
        build(a, l, mid, L);
        build(a, mid+1,r, R);
        seg[node] = a[L] + a[R];
    }
public:
    segmentTree(vector<int>& a) {
        int n = a.size();
        int s = 1;
        while (s < n)
            s *= 2;
        size = s;
        seg = vector<int>(s, 0);
        build(a,0,size-1,0);
    }
  /*  update(int idx, int val) {

    }*/
#undef L
#undef R
#undef mid
};
signed main() {
    // freopen("mex.in", "r", stdin);
   // freopen("mex.in", "r", stdout);
    SuperSafan
        int n, k;
    cin >> n >> k;
    vector<int> p(n,0);
    int cnt = 1;
    for (int i = 0; i < k; i ++) {
        if (p[i] == 0) {
            p[i] = cnt++;
            int j = i+k;
            while (j < n) {
                p[j] = cnt++;
                j += k;
            }
        }
    }
    write(p);
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