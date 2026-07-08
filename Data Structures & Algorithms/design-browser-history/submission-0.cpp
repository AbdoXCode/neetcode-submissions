class BrowserHistory {
    struct ListNode {
        string val;
        ListNode* prev;
        ListNode* next;

        ListNode(string val,ListNode*prev = nullptr,ListNode*next = nullptr) {
            this->val = val;
            this->prev = prev;
            this->next = next;
        }
    };
public:
    ListNode* cur;
    BrowserHistory(string homepage) {
        cur = new ListNode(homepage);
    }

    void visit(string url) {
        ListNode* temp = new ListNode(url);

        temp->prev = cur;
        cur->next = temp;
        cur = cur->next;
    }

    string back(int steps) {
        while (steps > 0 && cur->prev) {
            cur = cur->prev;
            steps--;
        }
        return cur->val;
    }

    string forward(int steps) {
        while (steps > 0 && cur->next) {
            cur = cur->next;
            steps--;
        }
        return cur->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */