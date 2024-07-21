#include <bits/stdc++.h>
#define ll long long
#define str string
#define mp make_pair
#define pll pair <ll,ll>
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
using namespace std;

int f(int x){
    return x*x;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int xc, yc, n, q;
    cin >> xc >> yc;
    cin >> n;
    vector <int> p;
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        p.push_back(f(xc-a) + f(yc-b));
    }
    sort(p.begin(), p.end());
    cin >> q;
    for (int i = 0; i < q; i++){
        int r, count = 0;
        cin >> r;
        cout << upper_bound(p.begin(), p.end(), f(r)) - p.begin() << endl;
        // 5 9 9 25 34 41 52
    }
}