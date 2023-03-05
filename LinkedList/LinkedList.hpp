#include <iostream>

template <typename T> 
class LinkedList {
    private: 
        struct Node {
            T data; 
            Node* next; 

            Node(const T& data) : data(data), next(nullptr) {}
        }; 
        Node* head; 
        Node* tail; 
        size_t size; 
    public: 
        LinkedList() : head(nullptr), tail(nullptr), size(0) {}
        /* 
            *** COPY CONSTRUCTOR ***
           
            It takes a reference to another LinkedList object and creates new LinkedList
            object that is a copy of the original. 
            
            In this case, the copy is done by iterating through the "other" list and pushing 
            each element onto the new list using the "push_back()" function. 
        */
        LinkedList(const LinkedList<T>& other) : head(nullptr), tail(nullptr), size(0) {
            Node* current = other.head; 
            while(current != nullptr) {
                push_back(current->data); 
                current = current->next; 
            }
        }

        void push_back(T); 
        void push_front(T); 
        void pop_front(); 
        void pop_back(); 
        void insert(int, T); 
        void remove(int); 
        void clear(); 
        /*
            *** CONST PUBLIC MEMBER FUNCTIONS *** 
            
            The member functions get_size(), is_empty(), print() are declared
            with the "const" at the end, indicating that they do not modify the 
            state of the LinkedList object they are called on. 

            This means they can be called on both "const" and non-"const" objects of the class. 
        */
        int get_size() const; 
        bool is_empty() const; 
        void print() const; 

}; 