include "GlobalLibs.h"
/*struct Node
{
	int data;
	Node* next;
};
void InsertNodeLinkedList(Node** head, int x)
{
	struct Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = NULL;
	if (*head != NULL)
	{
		temp->next = *head;
	}
	*head = temp;
}
void PrintLinkedList(Node* head)
{
	printf("List is: ");
	while (head != NULL)
	{
		printf(" %d", head->data);
		head = head->next;
	}
	printf("\n");
}
void mainLinkedList()
{
	Node* head = NULL;
	printf("How many numbers?\n");
	int n, i, x;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter the number \n");
		scanf_s("%d", &x);
		InsertNodeLinkedList(&head, x);
		PrintLinkedList(head);
	}
}
*/