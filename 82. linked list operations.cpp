#include<iostream>
using namespace std;

struct node{
    int info;
    node* link;
};

//creating a linked list
node* create(){
    node *ptr,*head=NULL;
    char ch='y';
    cout<<"enter yes or no"<<endl;
    cin>>ch;
    while(ch=='y'||ch=='Y'){
        if(head==NULL){
            head=new node;
            ptr=head;
        }
        else{
            ptr->link=new node;
            ptr=ptr->link;
        }
        int data; cin>>data;
        ptr->info=data;
        
        cout<<"want to continue or not";
        cin>>ch;
    }
    ptr->link=NULL;
    return(head);
}


//displaying the linked list
void traverse(node *head){
    cout<<"linked list is : ";
    node*ptr=head;
    while(ptr!=NULL){
        cout<<ptr->info<<" ";
        ptr=ptr->link;
    }
}


//finding the location of given item
node* search(node* head,int item){
    cout<<"enter element you want to search its location : ";
    node *ptr,*loc;
    loc=NULL;
    ptr=head;
    while(ptr->link!=NULL || item!=ptr->info){
        if (item == ptr -> info) {
            loc=ptr;
            return(loc);
        }
        else{
            ptr=ptr->link;
        }
    }
        return 0;
}


//inseret newnode at loc
node* instloc(node** head,int item,node* loc){
    cout<<"enter element you want to inseret at that location : ";
    node* newnode;
    newnode=new node;
    newnode->info=item;
    if(loc==NULL){
        newnode->link=(*head);
        *head=newnode;
    }
    else{
        newnode->link=loc->link;
        loc->link=newnode;
    }
    return 0;
}


//deleting a node in linked list
void deleteitem(node** head,int item){
    cout<<"enter element you want to delete  : ";
    node* ptr,*prevloc,*loc;
    if(*head==NULL){
        cout << "List is empty" << endl ;
        return;
    }
    prevloc=NULL;
    ptr=*head;
    while((ptr->link!=NULL)&&(item!=ptr->info)){
        ptr=ptr->link;
        prevloc=ptr;
    }
    if ((item == ptr->info)){
        loc=ptr;
    }
    else{
        cout<<"Item not found"<<endl;
        return;
    }
    if(prevloc==NULL){
        *head=(*head)->link;
    }
    else{
        prevloc->link = loc->link;
    }
    delete loc;
}

int main(){
    node *head=create();
    traverse(head);
    int item; cin>>item;
    node* loc=search(head,item);
    traverse(head);
    int data; cin>>data;
    instloc(&head,data,loc);
    traverse(head);
    deleteitem(&head,item);
    traverse(head;)
    
// destroying linked list
    node*ptr=head;
    while(ptr!=NULL){
        ptr=ptr->link;
        delete head;
        head=ptr;
    }

    return 0;
}

