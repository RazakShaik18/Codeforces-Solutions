#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
 
        int n;
        cin >> n;
 
        vector<int> p(n);
 
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
 
        // We have to check the numbers in increasing order:
        // 1, 2, 3, ..., n
        //
        // For every number x:
        // it must be present at either the LEFT end
        // or the RIGHT end.
        //
        // If x is not at either end -> impossible.
 
        int left = 0;
        int right = n - 1;
 
        bool ok = true;
 
        for (int x = 1; x <= n; x++) {
 
            // Is x at the left side?
            if (p[left] == x) {
                left++;
            }
 
            // Otherwise, is x at the right side?
            else if (p[right] == x) {
                right--;
            }
 
            // x is somewhere in the middle.
            // So it is impossible.
            else {
                ok = false;
                break;
            }
        }
 
        cout << (ok ? "YES
" : "NO
");
    }
 
    return 0;
}