#include <iostream>

template <class T>
class Node
{
    public:
        T data;
        Node<T>* next;
};

template <class T>
class List
{
    private:
        Node<T> *head;
    public:
        List(): head(NULL) {};
        List(T* arr, int n_nodes);
        ~List();

        void insert_at(int idx, T& data);
        void remove_at(int idx);
        void pop_back();
        void push_back(const T& val);
        void pop_front();
        void push_front(const T& val);

        template <class U>
        friend std::ostream& operator<<(std::ostream& out, List<U> &rhs);
};

template <class T>
List<T>::List(T* arr, int n_nodes) {
    Node<T>* temp = new Node<T>;
    temp->data = arr[0];
    temp->next = NULL;
    this->head = temp;
    for (int i = 1; i < n_nodes; i++) {
        this->push_back(arr[i]);
    }
}

template <class T>
List<T>::~List() {
    while(this->head != NULL) {
        this->pop_front();
    }
    delete this->head;
}

template <class T>
void List<T>::insert_at(int idx, T& data) {
    if (idx == 0) {
        this->push_front(data);
        return;
    }
    Node<T>* temp = new Node<T>;
    temp->data = data;
    Node<T>* h = head;
    for (int i = 1; i < idx; i++) {
        h = h->next;
    }
    temp->next = h->next;
    h->next = temp;
}

template <class T>
void List<T>::remove_at(int idx) { 
    if (idx == 0) {
        pop_front();
    }
    else {
        Node<T>* h = head;
        for (int i = 1; i < idx; i++) {
            h = h->next;
        }
        Node<T>* temp = h->next;
        h->next = temp->next;
        delete temp;
    } 
}

template <class T>
void List<T>::pop_back() {
    if (head == NULL) {
        return;
    }
    if (head->next == NULL) {
        this->pop_front();
        return;
    }
    Node<T>* h = head;
    while ((h->next)->next != NULL) {
        h = h->next;
    }
    Node<T>* temp = h->next;
    h->next = NULL;
    delete temp;
}

template <class T>
void List<T>::push_back(const T& val) {
    if (head == NULL) {
        this->push_front(val);
        return;
    }
    Node<T>* h = head;
    while(h->next != NULL) {
        h = h->next;
    }
    Node<T>* temp = new Node<T>;
    temp->data = val;
    temp->next = NULL;
    h->next = temp;
}

template <class T>
void List<T>::pop_front() {
    if (head == NULL) {
        return;
    }
    Node<T>* temp = head;
    head = temp->next;
    delete temp;
}

template <class T>
void List<T>::push_front(const T& val) {
    Node<T>* temp = new Node<T>;
    temp->data = val;
    temp->next = head;
    head = temp;
}

template <class U>
std::ostream& operator<<(std::ostream& out, List<U> &rhs) {
    if (rhs.head == NULL) 
        return out;

    Node<U>* h = rhs.head;
    while(h->next != NULL) {
        out << h->data << ",";
        h = h->next;
    }
    out << h->data;
    return out;
}
