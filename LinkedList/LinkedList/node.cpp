#include "node.h"

namespace dubs
{
	Node::Node(int data)
		: m_previous(nullptr)
		, m_data(data)
		, m_next(nullptr)

	{
		
	}
	
	Node* Node::Previous()
	{
		return m_previous;
	}

	void Node::SetPrevious(Node* newPrevious)
	{
		m_previous = newPrevious;
	}

	int Node::Data()
	{
		return m_data;
	}

	Node* Node::Next()
	{
		return m_next;
	}
	
	bool Node::HasNext()
	{
		return m_next != nullptr ? true : false;

	}

	void Node::SetNext(Node* newNext)
	{
		m_next = newNext;
	}

	Node::~Node()
	{
		
	}
}