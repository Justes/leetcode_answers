class MyCircularDeque {
public:
    vector<int> vec;
    int cap;
    
    MyCircularDeque(int k) {
        cap = k;
    }
    
    bool insertFront(int value) {
        if(isFull()) return false;
        vec.insert(vec.begin(), value);
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull()) return false; 
        vec.push_back(value);
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()) return false;
        vec.erase(vec.begin());
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;
        vec.pop_back();
        return true;
    }
    
    int getFront() {
        if(isEmpty()) return -1; else return vec[0];
    }
    
    int getRear() {
        if(isEmpty()) return -1; else return vec[vec.size() - 1];
    }
    
    bool isEmpty() {
        if(vec.size() == 0) return true; else return false;
    }
    
    bool isFull() {
        if(vec.size() == cap) return true; else return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
