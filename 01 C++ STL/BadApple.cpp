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

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, m;
    cin >> n >> m;
    ll apel = n-m;
    cout << (apel % 2 == 0 && apel > 2 ? "Ya" : "Tidak");
}