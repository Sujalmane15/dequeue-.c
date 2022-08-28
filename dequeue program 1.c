#include<stdio.h>
#include<process.h>
#define size 5

int dq[size];
int front=-1,rear=-1;

void front_insert();
void rear_insert();
void front_dequeue();
void dequeue_rear();
void display();
int main()
{ 
    int ch;
    while(1)
    {
    	printf("\n PRESS 1 FOR FRONT_INSERT:\n");
    	printf("PRESS 2 FOR REAR_INSERT:\n");
    	printf("PRESS 3 FOR FRONT_DEQUEUE:\n");
    	printf("PRESS 4 FOR DEQUEUE_REAR:\n");
    	printf("PRESS 5 FOR DISPLAY:\n");
    	printf("PRESS 6 FOR EXIT:\n");
    	
    	printf("SELECT THE YOUR OPTION:\n");
    	scanf("%d",&ch);
    	
    	switch(ch)
    	{
    		case 1:front_insert();
    		break;
    		case 2:rear_insert();
    		break;
    		case 3:front_dequeue();
    		break;
    		case 4:dequeue_rear();
    		break;
    		case 5:display();
    		break;
    		case 6:exit(0);
    		break;
    		default: printf("INVALIDE YOUR OPTION");
    		
    	
	}
    }
  
}
void front_insert()
{
	if(front==0)
	{
		printf("Q IS FULL THE FRONT SIDE\n");
		return;
	}
	if(front==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		front=front-1;
	}
	printf("ENTER THE ELEMENT:\n");
	scanf("%d",&dq[front]);
}

void rear_insert()
{
if((front==0 && rear==size-1) || (rear+1==front))
	{
		printf("Q IS FULL");
		return;
	}
	if(front==-1)
	{
		front=0;
		rear=0;
	}
	else if(rear==size-1)
	{
		rear=0;
	}
	else 
	{
		rear=rear+1;
	}
	printf("ENTER THE DATA LIKED LIST:");
	scanf("%d",&dq[rear]);
}

void front_dequeue()
{
 if(front==-1)
 {
 	printf("Q IS EMPTY");
 	return;
 }
 printf("DELETED DATA:%d\n",dq[front]);
 
 if(front==rear)
 {
 	rear=-1;
 	front=-1;
 }
 else if(front==size-1)
 {
 	front=0;
 }
 else 
 {
 	front=front+1;
 }
}

void dequeue_rear()
{
	if(front==-1)
	{
		printf("Q IS EMPTY\n");
		return;
	}
	printf("DELETION DATA:%d\n",dq[rear]);
	
	if(front==rear)
	{
		rear=-1;
		front=-1;
	}
	else
	{
		rear=rear-1;
	}
}
 void display()
 {
 	int i=front;
 	
 	printf("\n ELEMENTS INSIDE THE DOUBLE ENDED QUEUE ARE:");
 	while(i!=rear)
 	{
 		printf("%d\n",dq[i]);
		 i=(i+1)%size;
	 }
	 printf("%d\n",dq[rear]);
	 
 }
