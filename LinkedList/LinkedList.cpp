#include "LinkedList.hpp"

template <typename T>
void LinkedList<T>::push_back(T data) {
    Node* node = new Node(data);

    if(size == 0) {
        head = tail = node; 
    } else { 
        tail->next = node; 
        tail = node; 
    }
    size++; 
}

template <typename T>
void LinkedList<T>::push_front(T data) {
    Node* node = new Node(data); 

    if(size == 0) {
        head = tail = node; 
    } else {
        node->next = head; 
        head = node; 
    }
    size++; 
}

template <typename T>
void LinkedList<T>::pop_front() {
    if(size == 0) throw std::out_of_range("List is empty"); 
    Node* temp = head; 
    head = head->next; 
    delete temp; 
    size--; 
}

template <typename T> 
void LinkedList<T>::pop_back() {
    if(size == 0) throw std::out_of_range("List is empty"); 
    if(size == 1) {
        delete head; 
        head = tail = nullptr; 
        size--; 
    }   
    Node* current = head;
    while(current->next != tail) {
        current = current->next; 
    }
    delete tail; 
    tail = current;
    tail->next = nullptr; 
    size--; 
}

