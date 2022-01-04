#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int index = 0;
        int size = prices.size() - 1;
        int x = 0;
        int cnt = 0;
        for (; index < size; index ++) {
            x = prices[index + 1] -  prices[index];
            if (x > 0) {
                cnt += x;
            }
        }
        return cnt;
    }
};