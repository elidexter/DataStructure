#include "GlobalLibs.h"
struct Node
{
	int data;
	Node* next;
};
struct Node* head;
void Insert(int data)
{
	struct Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = NULL;
	if (head != NULL)
	{
		temp->next = head;
	}
	head = temp;
}
void Print()
{
	Node* temp = head;
	printf("Values\n");
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void Delete()
{
	Node* tempntext = head;
	head = head->next;
	free(tempntext);
}
void main()
{
	head = NULL;
	int i;
	for (i = 1; i < 10; i++)
	{
		Insert(i);
	}	
	Print();
	printf("Remove first\n");
	Delete();
	Print();
}
