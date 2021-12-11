#include <iostream>

template<typename T>
class List {
public:
    List();
    void add(T data);
private:

    template<typename X>
    class Node{
    public:
        X data;
        Node *next;
        Node(X data = X(), Node *next = nullptr){
            this->data = data;
            this->next = next;
        }
    };
    int Size;
    Node<T> *head;
};

template<typename T>
List<T>::List(){
    Size = 0;
    head = nullptr;
}

template<typename T>
void List<T>::add(T data){
    if (head == nullptr){
        head->data = data;
        head->next = head;
    }
    else {
        Node<T> *tmp = new Node<T>;
        while (tmp->next != head){
            tmp = tmp->next;
        }
        tmp->next = tmp;
        tmp->data = data;
        tmp->next = head;
    }
}


int main()
{
    List<std::string> li;
    li.add("a");
    return 0;
}