#include<iostream>
using namespace std;

struct node{
    int info;
    node *next, *prev;
};

class LinkList{
    private:
       node *head,*tail;
    public:
       LinkList(){
        head=tail=NULL;
       }
       void create();
       void trav_for();
       void trav_back();
       ~ LinkList();
};

int main(){
    LinkList l1;
    l1.create();
    l1.trav_for();
    l1.trav_back();

    return 0;
}
// creation of double linked list
void LinkList::create() {
    node *ptr,*head=NULL;
    char ch;
    cout<<"linkedlist";
    cin>>ch;
    while( ch=='y'||ch=='Y'){
        if(head==NULL){
            head=new node;
            head->prev=NULL;
            ptr=head;
        }
        else{
            ptr->next=new node;
            (ptr->next)->prev=ptr;
            ptr=(ptr->next);
        }
        cout<<"Enter the data : ";
        int data;cin>>data;
        ptr->info=data;
        cout<<"\nDo you want to continue?(y/N) :"; cin >> ch;
    }
    ptr->next=NULL;
    tail=ptr;
}
/* traversal in forward direction*/
void LinkList :: trav_for (){
    cout<<"list in forward"<<endl;
    node* ptr = head;
    while(ptr != NULL){
        cout<<ptr -> info<<" ";
        ptr=ptr -> next;
    }
}
/*traversal in backward direction*/
void LinkList::trav_back(){
    cout<<"list in backward"<<endl;
    node* ptr = tail;
    while(ptr != NULL ){
        cout<<ptr -> info<<" " ;
        ptr = ptr -> prev;
    }    
}
/* destroying linked list*/
LinkList::~LinkList (){
    node *ptr=head;
    cout<<"destroying"<<endl;
    while(ptr!=NULL){
        ptr=ptr->next;
        delete head;
        head=ptr;
    }
}