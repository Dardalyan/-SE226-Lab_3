#include <iostream>
#include "Queue.h"

int main()
{
	Queue* queue = new Queue(10);


	queue->enqueue(7);
	queue->enqueue(17);
	queue->enqueue(27);
	queue->enqueue(37);
	queue->enqueue(47);
	queue->enqueue(57);
	queue->enqueue(67);
	queue->enqueue(77);

	// to fill the queue remove  '//' mark below

	//queue->enqueue(87);
	//queue->enqueue(97);
	queue->showAll();

	queue->dequeue();
	//queue->showAll();

	queue->top();
	queue->isEmpty();
	queue->size();

	return 0;
}


