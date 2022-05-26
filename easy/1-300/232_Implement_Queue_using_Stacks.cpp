class MyQueue {
public:
    stack<int> s1, s2;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        int a;
        while(!s2.empty()) {
            a = s2.top();
            s2.pop();
            s1.push(a);
        }
        s1.push(x); 
        
        while(!s1.empty()) {
            int a = s1.top();
            s1.pop();
            s2.push(a);
        }
    }
    
    int pop() {
        int a = s2.top();
        s2.pop();
        return a;
    }
    
    int peek() {
        return s2.top();
    }
    
    bool empty() {
        return s2.empty();
    }
};