#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector <ll> v = {1, 2, 3, 3, 3, 6, 6, 7, 9, 10, 11, 12}; // Size: 12
    cout << "Binary Search 3: " << binary_search(v.begin(), v.end(), 3) << endl;
    cout << "Binary Search 8: " << binary_search(v.begin(), v.end(), 8) << endl;
    cout << "Index Lower Bound 3: " << lower_bound(v.begin(), v.end(), 3) - v.begin() << endl;
    cout << "Index Upper Bound 3: " << upper_bound(v.begin(), v.end(), 3) - v.begin() << endl;
    cout << "Index Lower Bound 8: " << lower_bound(v.begin(), v.end(), 8) - v.begin() << endl;
    cout << "Index Upper Bound 8: " << upper_bound(v.begin(), v.end(), 8) - v.begin() << endl;
    cout << "Index Lower Bound 13: " << lower_bound(v.begin(), v.end(), 13) - v.begin() << endl;
    cout << "Index Upper Bound 13: " << upper_bound(v.begin(), v.end(), 13) - v.begin() << endl;
    int x = 1e9;
    cout << (sqrt((x-1)*(x-1)) - sqrt(x*x));
    return 0;
}



