#include "doublylinkedlist.h"
#include <iostream>
namespace dubs
{
	DoublyLinkedList::DoublyLinkedList() 
		: m_count(0)
		, m_head(nullptr)
	{
	}

	void DoublyLinkedList::PushFront(int data)
	{
		if (m_head == nullptr)
		{
			m_head = new Node(data);
		}
		else
		{
			Node* oldHead = m_head;
			m_head = new Node(data);
			oldHead->SetPrevious(m_head);
			m_head->SetNext(oldHead);
		}

		m_count++;
	}

	void DoublyLinkedList::PushBack(int data)
	{
		if (m_head == nullptr)
		{
			m_head = new Node(data);
		}
		else
		{
			Node* last = m_head;

			while (last->HasNext())
			{
				last = last->Next();
			}

			Node* nodeToInsert = new Node(data);
			nodeToInsert->SetPrevious(last);
			last->SetNext(nodeToInsert);
		}
		m_count++;
	}

	int DoublyLinkedList::PopFront()
	{
		Node* currentHead = m_head;

		if (currentHead->HasNext())
		{
			m_head = currentHead->Next();
		}

		int data = currentHead->Data();

		delete currentHead;

		m_count--;

		return data;
	}

	int DoublyLinkedList::PopBack()
	{
		Node* last = m_head;

		while (last->HasNext())
		{
			last = last->Next();
		}

		int data = last->Data();

		last->Previous()->SetNext(nullptr);

		delete last;

		m_count--;

		return data;
	}

	int DoublyLinkedList::Count()
	{
		return m_count;
	}

	void DoublyLinkedList::PrintList()
	{
		Node* currentNode = m_head;

		while (currentNode != nullptr)
		{
			std::cout << currentNode->Data() << std::endl;

			currentNode = currentNode->Next();
		}
	}

	DoublyLinkedList::~DoublyLinkedList()
	{

	}

}