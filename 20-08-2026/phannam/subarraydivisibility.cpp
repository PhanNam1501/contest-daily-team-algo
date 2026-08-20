#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> cnt(n, 0);
    cnt[0] = 1;

    long long sum = 0;
    long long res = 0;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;

        sum += x;

        long long rem = ((sum % n) + n) % n;

        res += cnt[rem];
        cnt[rem]++;
    }

    cout << res << '\n';

    return 0;
}