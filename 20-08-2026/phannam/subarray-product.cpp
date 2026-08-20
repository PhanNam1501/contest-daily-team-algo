#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        queue<int> q;
        int res = 0;
        long long product = 1;
        vector<long long> pre(n+1, 1);
        for (int i = 0; i < n; i++) {
            while (q.size() > 0 && product * 1LL * nums[i] >= 1LL * k) {
                product /= 1LL * q.front();
                q.pop();
            }


            if (nums[i] < k) {
                q.push(nums[i]);
                res += q.size();
                product *= nums[i];
            }
        }

        return res;
    }
};