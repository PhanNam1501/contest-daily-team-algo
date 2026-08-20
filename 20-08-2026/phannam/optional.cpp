#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<long long> pre(n+1, 0);
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i-1] | (1LL << (s[i-1] - 'a'));
    }
    
    int L = 1;
    int R = 3;
    long long mask = pre[R] ^ pre[L - 1];

    if (mask == 0 || (mask & (mask - 1)) == 0) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }

    return 0;
}