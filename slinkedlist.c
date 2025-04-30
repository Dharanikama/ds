#include<stdio.h>
#include<stdlib.h>
  struct node{
         int data;
         struct node *next;
         };
  typedef struct node NODE;
  NODE *head=NULL;
  
  int create()
  {
      NODE *new_node,*tail;
      char ch;
    do{
      new_node=(NODE*)malloc(sizeof(NODE));
      printf("enter node value:");
      scanf("%d",&new_node->data);
      new_node->next=NULL;
   if(head==NULL)
   {
      head=new_node;
      tail=new_node;
      }
   else{
       tail->next=new_node;
       tail=new_node;
       }
   printf("do you want to continue(Y/N): ");
   scanf(" %c",&ch);
   }while(ch=='y'||ch=='Y');
    return 0;
    }
int insert_at_begin(){
       NODE *new_node;
       new_node=(NODE*)malloc(sizeof(NODE));
       printf("enter node value::insert at begin");
       scanf("%d",&new_node->data);
       new_node->next=head;
       head=new_node;
       return 0;
       }
int insert_at_end(){
     NODE *new_node,*tail;
     new_node=(NODE*)malloc(sizeof(NODE));
     printf("enter node value::insert at end");
     scanf("%d",&new_node->data);
     new_node->next=NULL;
 if(head==NULL)
{
   head=new_node;
   }
else{
    while(tail->next!=NULL)
         tail=tail->next;
        tail->next=new_node;
     
      }
      return 0;  
}
int insert_at_position(){
 NODE *new_node,*prev=head;
    int pos,i;
   printf("enter position");
   scanf("%d",&pos);
   if(head==NULL)
   {
   insert_at_begin();
   }
else{
     for(i=1;i<(pos-1);i++)
     {
     prev=prev->next;
     new_node=(NODE*)malloc(sizeof(NODE));
     printf("enter node value::insert at position\n");
     scanf("%d",&new_node->data);
     new_node->next=prev->next;
     prev->next=new_node;
     }
   }
     return 0;
     }


   int display()
   {
      NODE *temp=head;
    while(temp!=NULL)
    {
     printf("%d->",temp->data);
     temp=temp->next;
     }
    printf("NULL\n");
    return 0;
    }
    
 int main()
 {
   create();
   display();
   insert_at_begin();
   display();
   insert_at_end();
   display();
   insert_at_position();
   display();
   return 0;
 }
