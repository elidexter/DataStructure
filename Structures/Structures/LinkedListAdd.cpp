#include "GlobalLibs.h"
/*struct Node
{
	int data;
	Node* next;
};
struct Node* head;
void InsertAdd(int data, int n)
{
	Node* temp1 = new Node();
	temp1->data = data;
	temp1->next = NULL;
	if (n == 1)
	{
		temp1->next = head;
		head = temp1;
		return;
	}
	Node* temp2 = head;
	for (int i = 0; i < n - 2; i++)
	{
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
}
void PrintAdd(Node* head)
{
	while (head != NULL)
	{
		printf(" %d", head->data);
		head = head->next;
	}
	printf("\n");
}
void mainAdd()
{
	Node* head = NULL;
	InsertAdd(2, 1);
	InsertAdd(3, 1);
	InsertAdd(4, 1);
	InsertAdd(5, 1);
	PrintAdd(head);
}
*/