#include<stdio.h>
#include<stdlib.h>
struct  Node
{
    int data;
    struct Node *next;

};
struct Node *head=NULL;

struct Node* createNode(){
    struct Node *temp;
    int ele;
    temp=(struct Node*)calloc(1,sizeof(struct Node));
    if(temp==NULL){
    printf("out of memory");
    return NULL;
    }
    else{
    printf("\nEnter data:");
    scanf("%d",&ele);
    temp->data=ele;
    temp->next=NULL;
    printf("Node created\n");
    return temp;

    }

}
void createList(){
    int n;
    struct Node *ptr;
    printf("\nEnter no. of nodes::");
    scanf("%d",&n);
    struct Node *newNode=createNode();
    if(head==NULL){
        head=newNode;
        ptr=head;
        printf("Node is inserted\n");
    }

    for(int i=1;i<n;i++){
        newNode=createNode();
        ptr->next=newNode;
        ptr=ptr->next;
        printf("Node is inserted\n");
    }
}
void display(){
    if(head==NULL){
        printf("\nNo nodes are present");
    }
    else{
        struct Node *ptr=head;
        while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
        }
        printf("NULL\n");
    }
}
void insertAtBegin(){
    struct Node *newNode=createNode();

    if(head==NULL){
        head=newNode;

    }
    else{
    newNode->next=head;
    head=newNode;
    display();
    }

}
void insertAtEnd(){
    struct Node *newNode=createNode();
    printf("Inserted %d at end:\n",newNode->data);
    if(head==NULL){
        head=newNode;
    }
    else{
        struct Node *ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=newNode;
        display();
    }
}
int countNodes(){
    if(head==NULL)
    return 0;
    else{
        int cnt=1;
        struct Node *ptr=head;
        while(ptr->next!=NULL){
            cnt=cnt+1;
            ptr=ptr->next;

        }
        return cnt;
    }
}



int main(){
    int num;
    createList();
    while(1){
    printf("1.Display\n2.Insert at Begin\n3.Insert at End\n4.Count Nodes\n10.To exit");
    printf("\nEnter your option:");
    scanf("%d",&num);

    switch (num)
    {

    case 1:
        display();
        break;
    case 2:
          insertAtBegin();
          break;
    case 3:
          insertAtEnd();
          break;
    case 4:
          printf("Total Nodes:%d\n",countNodes());
          break;

    case 10:
          printf("Linked list operations completed");
          exit(0);

    default:
        break;
    }
    }
    return 0;

}
