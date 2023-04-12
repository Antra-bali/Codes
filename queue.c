#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int front=0;
int rear=0;
int queue[CAPACITY];
void enqueue();
void show();
void dequeue();
int main()
{
    while(1)
    {
        int choice;
        printf("\nEnter \n1.Enqueue\n2.Show\n3.Dequeue\n4.End\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        enqueue();
        break;
        case 2:
        show();
        break;
        case 3:
        dequeue();
        break;
        case 4:
        exit(0);
        default :
        printf("Invalid Choice\n");
        }
    }
}
void enqueue()
{
    if(rear==CAPACITY-1)
    {
        printf("Overflow\n");
    }
    else
    {
        int ele;
        printf("Enter an element: \n");
        scanf("%d",&ele);
        queue[rear]=ele;
        rear++;
    }
}
void show()
{
    if(rear==front)
    {
        printf("Underflow\n");
    }
    else
    {
        int i;
        for(i=front;i<rear;i++)
        {
            printf("\n %d",queue[i]);
        }
    }
}
void dequeue()
{
    int ele;
    
    if (rear==front)
    {
        printf("Queue underflow\n");
    }
    else
    {
        ele=queue[front];
        front++;
        printf("\n%d dequeued",ele);
        
    }
}