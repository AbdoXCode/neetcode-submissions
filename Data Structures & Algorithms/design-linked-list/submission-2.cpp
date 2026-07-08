class MyLinkedList {
    struct ListNode {
        int val;
        ListNode* next;

        ListNode(int val) {
            this->val = val;
            next = nullptr;
        }
    };
public:
    ListNode* head;
    int size;

    MyLinkedList() {
        head = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index >= size) return -1;
        int counter = 0;

        ListNode* crr = head;

        while (crr != nullptr) {
            if (index != counter) {
                counter++;
                crr = crr->next;
            }else {
                return crr->val;
            }
        }
        return -1;
    }

    void addAtHead(int val) {
        if (head == nullptr) {
            head = new ListNode(val);
        }else {
            ListNode* newNode = new ListNode(val);
            newNode->next = head;
            head = newNode;
        }
        size++;
    }

    void addAtTail(int val) {
        if (head == nullptr) {
            head = new ListNode(val);
        }else {
            ListNode* crr = head;
            while (crr->next != nullptr) {
                crr = crr->next;
            }
            ListNode* newNode = new ListNode(val);
            crr->next = newNode;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index > size) return;

        if (index == size) {
            addAtTail(val);
            return;
        }
        if (index == 0) {
            addAtHead(val);
            return;
        }

        ListNode* crr = head;
        for (int i =0;i<index - 1;i++) {
            crr = crr->next;
        }
        ListNode* newNode = new ListNode(val);
        newNode->next = crr->next;
        crr->next = newNode;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index >= size) return;

        ListNode* crr = head;

        if (index == 0) {
            ListNode* temp = head;
            head = head->next;
            size--;
            return;
        }

        for (int i =0;i<index-1;i++) {
            crr = crr->next;
        }
        ListNode* temp = crr->next;
        crr->next = temp->next;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */