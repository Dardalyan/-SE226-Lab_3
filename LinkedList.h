#pragma once


class Node
{
public:
	int *data;
	Node* next;

	Node(int *input)
	{
		this->data = input;
	}	


};


class LinkedList
{
private:
	int head = 0; // header of the linked list 

public:
	Node* node;


	LinkedList()
	{
		node = new Node(&head);
	}


};