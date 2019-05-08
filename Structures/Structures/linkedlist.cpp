#include "GlobalLibs.h"

struct Node
{
	int data;
	Node* next;
};
struct Node* head;
void Print()
{
	Node* temp = head;
	printf("Current List\n");
	int p = 1;
	while (temp != NULL)
	{
		printf("Pos: %d Val: %d \n", p, temp->data);
		temp = temp->next;
		p++;
	}
	printf("\n");
}
void InsertAtEnd()
{
	int val = 0;
	printf("Node value to insert:\n");
	scanf_s("%d", &val);
	struct Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data = val;
	temp->next = NULL;
	if (head != NULL)
	{
		temp->next = head;
	}
	head = temp;
}
void fill(int data)
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
void InsertAtFirst()
{
	int val = 0;
	printf("Node value to insert:\n");
	scanf_s("%d", &val);
	struct Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data = val;
	temp->next = NULL;
	if (head == NULL)
	{
		head=temp;
	}
	else
	{
		temp->next = head;
		head = temp;
	}
	Print();
}
void InsertAtPosition()
{
	int val=0, pos,idx;
	printf("Node position to insert:\n");
	scanf_s("%d", &pos);
	printf("Node value to insert:\n");
	scanf_s("%d", &val);
	struct Node* newnode = (Node*)malloc(sizeof(struct Node));
	newnode->data = val;
	newnode->next = NULL;
	Node* temp = head;
	for (idx = 0; idx < pos - 2; idx++)//get node before selected node
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
		}
		else
		{
			printf("Out index\n");
			return;
		}
	}
	if (temp != NULL)
	{
		newnode->next = temp->next;
		temp->next = newnode;
	}	
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
void DeleteLast()
{
	if (head == NULL)
	{
		printf("LinkedList Empty\n");
		return;
	}
	if (head->next == NULL)
	{
		head = NULL;
		return;
	}
	Node* currentNode = head;	
	Node* previosnode = NULL;
	while (currentNode->next != NULL)
	{
		previosnode = currentNode;
		if (previosnode->next->next == NULL)
		{
			currentNode = currentNode->next;			
			break;
		}
		currentNode = currentNode->next;
	}	
	previosnode->next = NULL;
	free(currentNode);
	Print();
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
		fill(i);
	}	
	Print();
	do
	{
		printf("1.Delete first\n");
		printf("2.Delete Last\n");
		printf("3.Delete at position\n");
		printf("4.Insert at position\n");
		printf("5.Insert first\n");
		printf("6.Insert Last\n");
		printf("7.Print List\n");
		printf("10.Exit\n");
		scanf_s("%d", &e);
		switch (e)
		{
			case 1:
				DeleteFirst();
				Print();
				break;
			case 2:
				DeleteLast();
				break;
			case 3:
				DeleteAt();
				Print();
				break;
			case 4:
				InsertAtPosition();
				Print();
				break;
			case 5:
				InsertAtFirst();
				break;
			case 7:
				Print();
				break;
			default:
				break;
		}		
	} while (e != 10);
}