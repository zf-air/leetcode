/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack {
public:
    stack<int> s;
    priority_queue<int,vector<int>,greater<int> > q;
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        s.push(x);
        q.push(x);
    }
    
    void pop() {
        if(s.top()==q.top())
            q.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return q.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

