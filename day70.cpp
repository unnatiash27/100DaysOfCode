//Implement a last-in-first-out (LIFO) stack using only two queues. The implemented stack should support all the functions of a normal stack (push, top, pop, and empty).
//Implement the MyStack class:
//void push(int x) Pushes element x to the top of the stack.
//int pop() Removes the element on the top of the stack and returns it.
//int top() Returns the element on the top of the stack.
//boolean empty() Returns true if the stack is empty, false otherwise.    

class MyStack {
    queue<int>ip,op;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        op.push(x);
        while(!ip.empty())
        {
            op.push(ip.front());
            ip.pop();
        }
        swap(ip,op);
    }
    
    int pop() {
        int ans=ip.front();
        ip.pop();
        return ans;
    }
    
    int top() {
        return ip.front();
    }
    
    bool empty() {
        return(ip.empty()&&op.empty());
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
