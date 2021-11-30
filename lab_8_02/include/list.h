#ifndef LAB_8_02_LIST_H
#define LAB_8_02_LIST_H

struct Node {
    TextNote val;
    Node* next;

    Node(TextNote _val) : val(_val), next(nullptr) {}
};

struct list {
    Node* first;
    Node* last;

    list() : first(nullptr), last(nullptr) {}

    bool is_empty() {
        return first == nullptr;
    }

    void push_back(TextNote _val) {
        Node* p = new Node(_val);
        if (is_empty()) {
            first = p;
            last = p;
            return;
        }
        last->next = p;
        last = p;
    }

    TextNote printNote(int usr) {
        Node* p = first;
        for (int i = 1; i < usr; i++) {
            p = p->next;
        }

        return p->val;
    }

    void printList() {
        if (is_empty()) return;
        Node* p = first;
        while (p) {
            p->val.getTitle();
            p = p->next;
        }
        cout << endl;
    }
};


#endif //LAB_8_02_LIST_H
