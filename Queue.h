#pragma once
#include <iostream>

#include "LinkedList.h"


class Queue {

private:
	 int maxSize;
	 int currentSize;

public:

	LinkedList* list;
	

	Queue(int size) 
	{
		this->maxSize = size;
		currentSize = 0;
		list = new LinkedList();
	}

	/*void sayMaxSize()
	{ 
		std::cout << "MaxSize: " << maxSize << std::endl;
	}*/

	void enqueue(int input)
	{
		Node* iterator = list->node;
		int i = 0;

		if (currentSize != maxSize) {
			while (i < maxSize) {

				if (iterator->next == nullptr)
				{
					iterator->next = new Node(&input);
					currentSize += 1;
					break;
				}
				iterator = iterator->next;
				i++;

			}
		}
		if(currentSize == maxSize){
			std::cout << "The Queue Is NOW Full ! \nYou cannot do more insertion to the queue !" << std::endl;
			std::cout << "The Last Element added : " << *iterator->data << std::endl;
		}

	}

	void showAll()
	{
		Node* iterator = list->node;

		if (currentSize != maxSize) 
		{
			for (int i = 0; i < currentSize; i++) {
				if (iterator->next != nullptr)
				{
					iterator = iterator->next;
					std::cout << *iterator->data << std::endl;
				}
				else {
					std::cout << "No element !\n" << std::endl;
				}

			}
		}

		if (currentSize == maxSize)
		{
			for (int i = 0; i < currentSize; i++) {
				iterator = iterator->next;
				std::cout << *iterator->data << std::endl;
			}

		}

	}


	void dequeue()
	{
		Node* iterator = list->node;
		int i = 0;

		while (i < maxSize) {

			if (iterator->next == nullptr)
			{
				std::cout << "Removed Element: " << *iterator->data << std::endl;
				iterator = nullptr;
				currentSize--;
				break;
			}
			iterator = iterator->next;
			i++;

		}

	}

	void top()
	{
		Node* iterator = list->node;
		int i = 0;

		if (currentSize != maxSize)
		{
			while (i < maxSize) {

				if (iterator->next == nullptr)
				{
					std::cout << "The Top Element Of The Queue: " << *iterator->data << std::endl;
					break;
				}

				iterator = iterator->next;
				i++;
			}
		}

		if (currentSize == maxSize)
		{
			while (i < maxSize) {
				if (i == maxSize - 1)
				{
					std::cout << "The Top Element Of The Queue: " << *iterator->next->data << std::endl;
					break;
				}

				iterator = iterator->next;
				i++;
			}
		}


		
	}

	void size() // Optional function that I made to control.
	{
		std::cout <<"Size: "<< currentSize << std::endl;
	}


	bool isEmpty()
	{
		if (list->node->next == nullptr) {
			std::cout << "Queue is empty !" << std::endl;
			return true;
		}
		else {
			std::cout << "Queue is NOT empty !" << std::endl;
			return false;
		}

	}




};

