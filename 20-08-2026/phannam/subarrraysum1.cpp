#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<long long> pre(n+1, 0);
    unordered_map<long long, long long> cnt;
    cnt[0] = 1;
    int res = 0;
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i-1] + arr[i-1];

        res += cnt[pre[i]-x];
        cnt[pre[i]]++;
    }
    
    cout << res << "\n";
    
}