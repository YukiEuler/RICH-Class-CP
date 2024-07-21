#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    tuple <int, int, double, double> t(5, 9, 2.1, 3.3);
    cout << get<0>(t) << ' ' << get<1>(t) << ' ' << get<2>(t) << endl;

    tuple <int, int, double, double> r(5, 9, 2.0, 2.2);
    cout << (t < r) << endl; // true
}



