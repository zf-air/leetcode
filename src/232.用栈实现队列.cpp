/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

// @lc code=start
class MyQueue
{
private:
    void inputStack(){
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
    }
public:
    stack<int> s1, s2;
    // 两个栈，一个输入栈，一个输出栈
    MyQueue()
    {
        
    }

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        inputStack();
        if(!s2.empty()){
            int x=s2.top();
            s2.pop();
            return x;
        }          
        return -1;
    }

    int peek()
    {
        inputStack();
        if(!s2.empty())
            return s2.top();
        return -1;
    }

    bool empty()
    {
        return s1.empty() && s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end
