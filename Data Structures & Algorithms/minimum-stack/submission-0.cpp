class MinStack {
    vector<int> tabStack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        tabStack.push_back(val);
    }
    
    void pop() {
        if(!tabStack.empty()){
            tabStack.pop_back();
        }
    }
    
    int top() {
        if(tabStack.empty()){
            throw runtime_error("Stack is empty");
        }
        return tabStack.back();
    }
    
    int getMin() {
        if (tabStack.empty()) {
            throw runtime_error("Stack is empty");
        }

        int min = tabStack[0];
        for(int i = 0; i < tabStack.size(); i++){
            if(tabStack[i] < min){
                min = tabStack[i];
            }
        }
        return min;
    }
};
