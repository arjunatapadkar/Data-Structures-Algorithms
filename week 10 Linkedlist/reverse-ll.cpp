

#include<iostream> 
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int x){
        this->data = x;
        this->next = NULL;
    }
};

void printList(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL \n";
}


Node* reverse(Node* &prev, Node*  &curr){

    if(curr == nullptr){
        return prev;
    }

    Node* forward = curr->next;
    curr->next = prev;

    // recursion
    reverse(curr, forward);

}



Node* usingForLoop(Node* &head){

    Node* prev = nullptr;
    Node* curr = head;
    cout << "entered\n\n";
    while(curr != nullptr){
        
        Node* forward = curr->next;
        curr->next = prev;

        // looping
        prev = curr;
        curr = forward;

    }
    cout << "done\n\n";
    return prev;


}




int main(){
    cout << "\n\n";
    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    printList(head);


    Node* prev = nullptr;

    head = reverse(prev, head);

    printList(head);

    head = usingForLoop( head);

    printList(head);



     cout << "\n\n";

    return 0;
}