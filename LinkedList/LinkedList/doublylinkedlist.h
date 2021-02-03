#pragma once

#include "node.h"

namespace dubs
{
	class DoublyLinkedList
	{
	public:
		DoublyLinkedList();
		void PushFront(int data);
		void PushBack(int data);
		int PopFront();
		int PopBack();
		int Count();
		void PrintList();
		~DoublyLinkedList();

	private:
		Node* m_head;
		int m_count;


	};
}