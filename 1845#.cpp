#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int count = 0;
    int half = nums.size() / 2;
    
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != nums[i+1]) {
            count ++;
        }
    }
    
    if (count > half) {
        answer = half;
    } else {
        answer = count;
    }
    return answer;
}