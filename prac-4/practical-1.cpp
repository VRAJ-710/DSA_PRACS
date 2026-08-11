#include<iostream>
using namespace std;
struct node{
    int info;
    struct node *link;
};
struct node *head = NULL;
struct node *create(int v){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->info = v;
    temp->link = NULL;
    return temp;
};
 void insert_front(){
    int v;
    cout<<"Enter v:";
    cin>>v;
    struct node *temp1;
    temp1=create(v);
    temp1->link = head;
    head=temp1;
 }
void insert_end(){
    int v2;
    cout<<"Enter v2:";
    cin>>v2;
    struct node *temp1 = create(v2);
    if(head==NULL){
        head=temp1;
        return;
    }
    struct node *trav = head;
    while(trav->link!=NULL){
        trav=trav->link;
    }
    trav->link=temp1;
}
void display(){
    struct node *trav = head;
    while(trav!=NULL){
        cout<<trav->info<<endl;
        trav=trav->link;
    }
}
void delete_front(){
    struct node *temp;
    if(head==NULL) cout<<"Empty list";
    else if(head->link==NULL){
        free(head);
        head=NULL;
    }
    else{
        temp=head;
        head=head->link;
        free(temp);
    }
}
void delete_back(){
    struct node *trav=head;
    if(head==NULL) cout<<"Empty list";
    else if(head->link==NULL){
        free(head);
        head=NULL;
    }
    else{
        while(trav->link->link!=NULL){
            trav=trav->link;
        }
        free(trav->link);
        trav->link=NULL;
    }

}
void delete_(int x){
    struct node *temp;
    struct node *trav=head;
    if(head==NULL) cout<<"Empty list";
    if(head->info==x) delete_front();
    while(trav->link->info!=x){
        trav=trav->link;
    }
    temp=trav->link;
    trav->link=trav->link->link;
    free(temp);
}
int main(){
    int n;
    while(true){
        cout<<"Enter choice:";
        cin>>n;

        switch(n){
        case 1:
            insert_front();
            break;

        case 2:
            insert_end();

            break;
        case 3:
            display();
            break;
        case 4:
            delete_front();
            break;
        case 5:
            delete_back();
            break;
        case 6:
            int x;cout<<"Enter value of x:";
            cin>>x;
            delete_(x);
            break;
        case 7:
            exit(0);
        default:
            cout<<"invalid argument:"<<endl;
            break;
        }
    }
    return 0;
}
