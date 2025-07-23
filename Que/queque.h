#include <iostream>
using namespace std;

template <typename t>
struct list {
    t val;
    list* next;
    list* prev;
};

template <typename t>
struct que {
    list<t>* top1;
    list<t>* top2;

    que() {
        top1 = nullptr;
        top2 = nullptr;
    }

    que(const que<t>& l) {
        top1 = nullptr;
        top2 = nullptr;

        if (l.top1 == nullptr)
            return;

        list<t>* q = l.top1;
        while (q != nullptr) {
            list<t>* p = new list<t>;
            p->val = q->val;
            p->next = nullptr;
            p->prev = nullptr;

            if (top1 == nullptr) {
                top1 = p;
                top2 = p;
            } else {
                top2->next = p;
                p->prev = top2;
                top2 = p;
            }
            q = q->next;
        }
    }

    void enque(int n) {
        list<t>* l = new list<t>;
        l->val = n;
        l->next = nullptr;
        l->prev = nullptr;
        if (top1 == nullptr) {
            top1 = l;
            top2 = l;
        } else {
            l->next = top1;
            top1->prev = l;
            top1 = l;
        }
    }

    t deque() {
        if (top2 == nullptr) {
            cout << "error: empty queue" << endl;
            return t();
        }
        t x = top2->val;
        list<t>* temp = top2;
        top2 = top2->prev;
        if (top2 == nullptr) {
            top1 = nullptr;
        } else {
            top2->next = nullptr;
        }
        delete temp;
        return x;
    }

    t top() {
        if (top2 == nullptr) {
            cout << "error: empty queue" << endl;
            return t();
        }
        return top2->val;
    }

    bool empty() {
        return top1 == nullptr;
    }
};

template <typename t>
que<t> input(t size) {
    cout << "Enter " << size << " elements:" << endl;
    t x;
    que<t> l;
    for (int i = 0; i < size; i++) {
        cin >> x;
        l.enque(x);
    }
    return l;
}

template <typename h>
void output(que<h> l) {
    h x;
    while (!l.empty()) {
        x = l.deque();
        cout << x << " ";
    }
    cout << endl;
}