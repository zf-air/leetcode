/*
 * @lc app=leetcode.cn id=100302 lang=cpp
 *
 * [剑指 Offer 30] 包含min函数的栈
 */

// @lc code=start
class MinStack {
public:
    /** initialize your data structure here. */
    // 辅助栈2记录的是当前栈元素内的最小值，两个栈大小相等
    stack<int> s1;
    stack<int> s2;
    MinStack() {
        
    }
    
    void push(int x) {
        s1.push(x);
        if(s2.empty()){
            s2.push(x);
        }
        else{
            if(s2.top()>=x){
                s2.push(x);
            }
            else{
                s2.push(s2.top());
            }
        }
    }
    
    void pop() {
        s1.pop();
        s2.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int min() {
        return s2.top();
    }   
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */
// @lc code=end

