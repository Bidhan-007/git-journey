
# include<iostream>
using namespace std;
class List{
struct Node{
    Node* next;
    int data;
    Node(int value){
        data=value;
        next=nullptr;
    }
};
Node* head=nullptr;
bool isEmpty(){
    return head==nullptr;
}
public:
    void insert(int idx,int value){
        Node* newNode=new Node(value);
        Node* p=head;
        if(idx==0){
            newNode->next=head;
            head=newNode;
            return;
        }
        for(int i=0;i<idx-1&&p->next!=nullptr;i++){
            p=p->next;
        }
        if(p==nullptr){
            cout<<"Invalid Index to Insert"<<endl;
            return;
        }
        newNode->next=p->next;
        p->next=newNode;
    }
    void deletion_by_idx(int idx){
        Node* p=head;
        if(isEmpty()){
            cout<<"Nothing To Delete"<<endl;
            return;
        }
        if(idx==0){
            Node* temp=head;
            head=head->next;
            delete temp;
            return;
        }
        for(int i=0;i<idx-1&&p->next!=nullptr;i++){
            p=p->next;
        }
        if(p==nullptr){
            cout<<"Invalid Index";
            return;
        }
        Node* delNode=p->next;
        p->next=delNode->next;
        delete delNode;
    }
    void search_value(int val){
        Node* p=head;
        if(isEmpty()){
            cout<<"Nothing To Search"<<endl;
            return;
        }
        while(p!=nullptr){
            if(p->data==val){
                cout<<"data Found "<<val<<endl;
                return;
            }
            p=p->next;
    }
    cout<<"Not_in_list"<<endl;
    }
    void display(){
        Node* p=head;
        while(p!=nullptr){
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<"Null"<<endl;
    }
};
int main()
{
    List l;
    l.insert(0,10);
    l.insert(1,20);
    l.insert(2,30);
    l.insert(3,40);
    l.display();
    l.search_value(40);
    l.deletion_by_idx(3);
    l.display();
    return 0;
}