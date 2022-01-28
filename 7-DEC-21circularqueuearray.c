    #include <stdio.h>
    #include<stdlib.h>

    int queue[];
    int front=-1;
    int rear=-1;
    void enqueue(int element,int size)
    {
        if(front==-1 && rear==-1)
        {
            front=0;
            rear=0;
            queue[rear]=element;
        }
        else if(front==(rear+1)%size)
        {
            printf("Queue is overflow..");
        }
        else if (rear==size-1 && front!=0)
        {
            rear=0;
        }
        else
        {
            rear=(rear+1)%size;
        }
        queue[rear]=element;

    }


    int dequeue(int size)
    {
        if((front==-1) && (rear==-1))
        {
            printf("\nQueue is underflow..");
        }
     else if(front==rear)
    {
       printf("\nThe dequeued element is %d", queue[front]);
       front=-1;
       rear=-1;
    }
    else if(front==size-1)
    {
        front=0;
    }
    else
    {
        printf("\nThe dequeued element is %d", queue[front]);
       front=front+1;
    }
    }

    void display(int size)
    {
        int i;
    printf("\n");
    if (front > rear)
    {
        for (i = front; i < size; i++)
        {
            printf("%d ", queue[i]);
        }
        for (i = 0; i <= rear; i++)
            printf("%d ", queue[i]);
    }
    else
    {
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
        }

    int main()
    {
        int choice=1,x,s;
        //printf("enter the size of queue");
        //scanf("%d",&s);

        while(choice<5 && choice!=0)
        {
        printf("\n1.Insert an element");
        printf("\n2.Delete an element");
        printf("\n3.Display the element");
        printf("\n4.exit");
        printf("\nEnter your choice =");
        scanf("%d", &choice);

        switch(choice)
        {

            case 1:

            printf("Enter the element which is to be inserted=");
            scanf("%d", &x);
            enqueue(x,s);
            break;
            case 2:
            dequeue(s);
            break;
            case 3:
            display(s);
            break;
            case 4:
                exit(0);
                break;


        }}
        return 0;
    }
