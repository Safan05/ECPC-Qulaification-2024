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
signed main() {
    // freopen("mex.in", "r", stdin);
   // freopen("mex.in", "r", stdout);
    SuperSafan
        int x1, y1, r1;
    cin >> x1 >> y1 >> r1;
    int x2, y2, r2;
    cin >> x2 >> y2 >> r2;
    long double d_centers = sqrt(pow(x1 - x2, 2) + pow(y1- y2, 2));
    long double rmax = max(r1, r2);
    long double rmin = min(r1, r2);
    if (d_centers >= (r1 + r2) || (x1 == x2 && y1 == y2)||d_centers+rmin<rmax)
        cout << -1 << endl;
    else {
       long double A1 = pi * pow(rmax, 2);
       long double A2 = pi * pow(rmin, 2);
        if ((r1 - r2) == d_centers)
            cout<<fixed<<setprecision(12) << A1 - A2 << endl;
        else {
            long double r3 = (pow(rmax,2) - pow(rmin,2) + pow(d_centers,2))/(2*d_centers);
            long double r4 = (-pow(rmax, 2) + pow(rmin, 2) + pow(d_centers, 2)) / (2 * d_centers);
            long double theta1 = 2 * acos((r3 / rmax));
            long double theta2 = 2 * acos((r4 / rmin));
            long double AA1 = ((A1 * theta1) / (2 * pi)) - (pow(rmax, 2)*(sinl(theta1)) / 2);
            long double AA2 = ((A2 * theta2) / (2 * pi)) - (pow(rmin, 2) * (sinl(theta2)) / 2);
            cout <<fixed<< setprecision(12) << A1-AA1-AA2<< endl;

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
*/