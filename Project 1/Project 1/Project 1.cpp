#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

int main()
{
	clsDblLinkedList<int>MydblLinkedList;
	MydblLinkedList.InsertAtBeginning(1);
	MydblLinkedList.InsertAtBeginning(2);
	MydblLinkedList.InsertAtBeginning(3);
	MydblLinkedList.InsertAtBeginning(4);
	MydblLinkedList.Print();

	return 0;
}