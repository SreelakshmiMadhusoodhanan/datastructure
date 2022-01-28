#include<stdio.h>
#include<stdlib.h>
void insertbeg();
void insertrand();
void insertend();
void deletebeg();
void deleteend();
void deletionrandom();
void display();
struct node
{
int data;
struct node *next;
}*head=NULL;
int value,l1,l2,choice;
void main()
{
    while(choice!=8)
        {

        printf("\n1 Insert at begining\n2.Insert at random\n3.Insert at end\n4. Delete at begining\n5.Delete at end\n6.Delete at random\n7.Display\n8.Exit");
        printf("\n Enter your choice=");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insertbeg();
            display();
            break;
            case 2:insertrand();
            break;
            case 3:insertend();
            break;
            case 4:deletebeg();
            break;
            case 5:deleteend();
            break;
            case 6:deleterandom();
            break;
            case 7:display();
            break;
            case 8:exit(0);
            break;
            default:printf("INVALID");
            break;
        }
        }
}

void insertbeg()
{

    struct node *newnode=malloc(sizeof(struct node));
    printf("\n Enter the value=");
    scanf("%d",&value);
    newnode->data=value;
    if(head==NULL)
    {
        newnode->next=NULL;
        head=newnode;
    }
    else
    {
     newnode->next=head;
    head=newnode;
    }
}

void insertrand()
{
    struct node *newnode=malloc(sizeof(struct node));

    printf("\n Enter location 1 and location 2=");
    scanf("%d%d",&l1,&l2);
    printf("\n Enter the value=");
    scanf("%d",&value);
    newnode->data=value;
        if(head==NULL)
        {
        newnode->next=NULL;
        head=newnode;
        }
        struct node *temp=head;
        while(temp->data!=l1&&temp->data!=l2)
        {
        temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
}


void insertend()
{
    struct node *newnode=malloc(sizeof(struct node));
    printf("\n Enter the value=");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
        if(head==NULL)
        {
        head=newnode;
        }
        else
        {
        struct node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        }
}

void deletebeg()
{
    if(head==NULL)
    {
        printf("\n DEletion is not possible!!!");
    }
    else
    {
        struct node *temp=head;
        head=temp->next;
        free(temp);

    }
}
void deleteend()
{
        if(head==NULL)
        {
        printf("NOt posiible");
        }
        else
        {
        struct node *temp=head;
        struct node *prev;
        while(temp->next!=NULL)
        {

            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        free(temp);
        }
}

void deleterandom()
{
    printf("\n Enter the elemnt to delete=");
    scanf("%d",&l1);
        if(head==NULL)
        {
        printf("/n Not PossiblE");
        }
        else
        {
        struct node *temp=head;
        struct node *prev;
        while(temp->data!=l1)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        free(temp);
        }
}
void display()
{
struct node *temp=head;
        while(temp->next!=NULL)
        {
        printf("%d-->",temp->data);
        temp=temp->next;
        }
        printf("%d-->NULL",temp->data);
}





