class MinStack {
public:
    vector<int> vec;
    
    MinStack() {
        
    }
    
    void push(int val) {
        vec.push_back(val);
    }
    
    void pop() {
        vec.pop_back();
    }
    
    int top() {
        return vec[vec.size() - 1];
    }
    
    int getMin() {
        return *min_element(vec.begin(), vec.end());
    }
};
