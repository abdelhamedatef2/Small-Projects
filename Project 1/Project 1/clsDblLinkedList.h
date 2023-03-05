#pragma once
#include <iostream>
using namespace std;

template<class T>
class clsDblLinkedList
{
public:
	class Node
	{
	public:
		T value;
		Node* next;
		Node* previous;
	};
	Node* head = NULL;

	void Print()
	{
		cout << "\n";
		while (head != NULL) {
			cout << head->value << " ";
			head = head->next;
		}
	}
	void InsertAtBeginning(int value)
	{
		// Allocate memory to a node
		Node* new_node = new Node();

		// insert the data
		new_node->value = value;
		new_node->next = head;

		// Move head to new node
		head = new_node;

	}
    Node* Find(Node* head, int Value)
    {

        while (head != NULL) {

            if (head->value == Value)
                return head;


            head = head->next;
        }

        return NULL;

    }

    // Insert a node after a node
    void InsertAfter(Node* Prev_node, int Value) {

        if (Prev_node == NULL) {
            cout << "the given Previous node cannot be NULL";
            return;
        }

        Node* new_node = new Node();
        new_node->value = Value;
        new_node->next = Prev_node->next;
        Prev_node->next = new_node;
    }


    // Insert at the end
    void InsertAtEnd(Node*& head, int Value) {

        Node* new_node = new Node();

        new_node->value = Value;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
            return;
        }

        Node* LastNode = head;
        while (LastNode->next != NULL)
        {
            LastNode = LastNode->next;
        }

        LastNode->next = new_node;
        return;
    }

};

