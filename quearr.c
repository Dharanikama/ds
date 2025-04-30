#include<stdio.h>
#define MAX 4
int queue[MAX];
int front=-1,rear=-1;
int enqueue(int ele){
     if(rear==MAX-1)
     {
      printf("\n queue is overflow\n");
      }
    else{
        if(front==-1)
        front=0;
        rear++;
        queue[rear]=ele;
        printf("element inserted\n");
        }
        return 0;
     }
 int dequeue(){
     if(front==-1)
     {
       printf("queue underflow\n");
       }
     else if(front==rear)
     {
        printf("deleted element %d\n",queue[front]);
        front=-1;
        rear=-1;
       }
     else{
          printf("deleted element %d\n",queue[front]);
          front++;
          }
        return 0;
        }
int display(){
     int i;
    if(front==-1){
    printf("queue is empty\n");
    }
   else{
       for(i=front;i<=rear;i++){
          printf("%d",queue[i]);
          }
          printf("\n");
         }
         return 0;
         }
int main(){
    int ch,ele;
    while(1)
    {
      printf("\n1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
      printf("select choice\n");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1: printf("enter element\n");
                 scanf("%d",&ele);
                 enqueue(ele);
                 break;
         case 2: dequeue();
                 break;
         case 3: display();
                 break;
         case 4: exit(0);
                  break;
         default: printf("invalid choice");
                  break;
         }
       }
          return 0;
          }
                          
