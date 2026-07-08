class MyStack {
public:
    queue<int> q1;
    queue<int> q2;

    MyStack() {}

    void push(int x) {
        q1.push(x);
    }

    int pop() {
        int temp = q1.back();
        int n = q1.size() - 1;

        for (int i =0;i<n;i++) {
            int f = q1.front();
            q1.pop();
            q2.push(f);
        }

        q1=q2;

        while (!q2.empty()) q2.pop();
        return temp;
    }

    int top() {
        if (!empty()) {
            return q1.back();
        }
        return -1;
    }

    bool empty() {
        return q1.empty();
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