#include <bits/stdc++.h>
using namespace std;
 
void Verity() {
    int n, m;
    cin >> n >> m;
 
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
    }
 
    if (n == 1) {
        cout << 0 << '
';
        return;
    }
 
    int k = (n + 1) / 2;
    cout << k << '
';
 
    for (int i = 1; i <= k; i++) {
        cout << i << ' ' << i + k - 1 << '
';
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) Verity();
 
    return 0;
}