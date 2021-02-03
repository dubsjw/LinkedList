#pragma once

namespace dubs
{
	class Node
	{
	public:
		Node(int data);
		Node* Previous();
		void SetPrevious(Node* newPrevious);
		int Data();
		Node* Next();
		bool HasNext();
		void SetNext(Node* newNext);
		~Node();

	private:
		Node* m_previous;
		int m_data;
		Node* m_next;

	};
}
