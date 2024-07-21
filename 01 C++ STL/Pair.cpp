#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    pair <int, int> p;
    p.first = 3;
    p.second = 5;
    cout << p.first << ' ' << p.second << endl;

    pair q(4, "Asta");
    cout << q.first << ' ' << q.second << endl;
    cout << get<0>(q) << ' ' << get<1>(q) << endl;
    return 0;
}



