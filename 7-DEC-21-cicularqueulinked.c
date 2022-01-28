#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node *front = NULL;
struct node *rear= NULL;
void enqueue(int value)
{
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = value;
	newnode->next = NULL;
	if((rear==NULL)&&(front==NULL))
	{
		front = rear = newnode;
		rear->next = front;
	}
	else
	{
		rear->next = newnode;
		rear = newnode;
		newnode->next = front;
	}
}
void dequeue()
{
	struct node* temp;
	temp = front;
	if((front==NULL)&&(rear==NULL))
		printf("\nQueue is Empty");
	else if(front == rear)
    {
		front = rear = NULL;
		free(temp);
	}
	else
	{
		front = front->next;
		rear->next = front;
		free(temp);
	}


}
void print()
{
	struct node* temp;
	temp = front;
	if((front==NULL)&&(rear==NULL))
		printf("\nQueue is Empty");
	else
        {
		do
		{
			printf("\n%d",temp->data);
			temp = temp->next;
		}
		while(temp != front);
	}
}
int main()
{
	int opt,n,i,data;
	printf("Enter Your Choice:-");
	do{
		printf("\n\n1 for Insert the Data in Queue\n2 for show the Data in Queue \n3 for Delete the data from the Queue\n0 for Exit\n");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				printf("\nEnter the number of data");
				scanf("%d",&n);
				printf("\nEnter your data");
				i=0;
				while(i<n)
                {
					scanf("%d",&data);
					enqueue(data);
					i++;
				}
				break;
			case 2:
				print();
				break;
			case 3:
				 dequeue();
				break;
			case 0:
				break;
			default:
				printf("\nIncorrect Choice");

		}
	}while(opt!=0);
return 0;
}
