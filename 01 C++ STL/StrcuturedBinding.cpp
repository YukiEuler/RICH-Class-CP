#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    pair <int, int> p(9, 10);
    // int x = p.first;
    // int y = p.second;
    auto [x, y] = p;
    auto& [a, b] = p;
    cout << x << ' ' << y << endl;

    a = 3;
    y = 7;
    cout << p.first << ' ' << p.second << endl;

    tuple <int, int, double> t(5, 9, 2.1);
    auto& [i, j, k] = t;
    cout << i << ' ' << j << ' ' << k << endl;
}



