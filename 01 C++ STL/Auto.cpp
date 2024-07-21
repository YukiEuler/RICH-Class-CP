#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    auto a = "Pekora"; // const char*
    auto b = "Pekora"s; // string
    auto c = 31415; // int
    auto d = 3.14; // double

    vector <ll> v = {2, 5, 7};
    auto e = v.begin(); // vector<ll>::iterator
    for (ll &elm: v) cout << elm << ' ';
    return 0;
}



