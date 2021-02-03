#include "doublylinkedlist.h"
#include <iostream>


	int main(int argc, char** argv)
	{
		dubs::DoublyLinkedList list;
		list.PushBack(0);
		list.PushBack(1);
		list.PushBack(2);
		list.PushBack(3);
		list.PushBack(4);
		list.PushBack(5);
		list.PrintList();

		std::cout << "Count: " << list.Count() << std::endl;

		list.PopBack();
		list.PopBack();
		

		list.PrintList();

		return 0;
	}
