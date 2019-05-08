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
	int p = 1;
	while (temp != NULL)
	{
		printf("Pos: %d Val: %d \n", p, temp->data);
		temp = temp->next;
		p++;
	}
	printf("\n");
}
void DeleteFirst()//equivale a eliminar el head y poner el siguiente
{
	if (head == NULL)
	{
		printf("LinkedList Empty\n");
		return;
	}	
	Node* tempntext = head;
	head = tempntext->next;
	free(tempntext);
}
void DeleteAt()
{
	int n;
	printf("Node position to delete?\n");
	scanf_s("%d", &n);	
	if (head == NULL)
	{
		printf("LinkedList Empty\n");
		return;
	}
	struct Node* temp1 = head;
	if (n == 1)
	{
		head = temp1->next;
		free(temp1);
		return;
	}
	int i;
	for (i = 0; i < n-2; i++)//get node before selected node
	{
		temp1 = temp1->next;
	}
	struct Node* nodeToDelete = temp1->next;//node to delete	
	temp1->next = nodeToDelete->next;
	free(nodeToDelete);	
}
void main()
{
	head = NULL;
	int i,d,e;
	for (i = 5; i> 0; i--)
	{
		Insert(i);
	}	
	Print();
	do
	{
		printf("1.Delete firsth\n");
		printf("2.Delete at position\n");
		printf("4.Exit\n");
		scanf_s("%d", &e);
		switch (e)
		{
			case 1:
				DeleteFirst();
				Print();
				break;
			case 2:
				DeleteAt();
				Print();
				break;
			default:
				break;
		}		
	} while (e != 4);	
}