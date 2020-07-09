/*
 * @lc app=leetcode.cn id=703 lang=cpp
 *
 * [703] 数据流中的第K大元素
 */

// @lc code=start
class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int> > p;
    KthLargest(int k, vector<int>& nums) {
        sort(begin(nums),end(nums));
        for(int i=0;i<k;i++)
            p.push(nums[nums.size()-i-1]);
    }
    
    int add(int val) {
        if(val>p.top()){
            p.pop();
            p.push(val);
        }
        return p.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
// @lc code=end

