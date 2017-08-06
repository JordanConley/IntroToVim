#pragma once

#include <iostream>

template <typename T>
class MyLinkedList {
    private:
        struct Node {
            T data;
            Node* next;
        };

        Node* head;

        int private_variable;

    public:
        MyLinkedList() {
            head = nullptr;
        }

        ~MyLinkedList() {
            while (head != nullptr) {
                Node* old = head;
                head = head->next;
                delete old;
            }
        }

        void append(T t) {
            Node** indirect = &head;
            while (*indirect != nullptr) {
                indirect = &((*indirect)->next);
            }

            (*indirect) = new Node();
            (*indirect)->data = t;
        }

        void print_all() {
            const Node* itr = head;
            while (itr != nullptr) {
                std::cout << itr->data << std::endl;
                itr = itr->next;
            }
        }
};

