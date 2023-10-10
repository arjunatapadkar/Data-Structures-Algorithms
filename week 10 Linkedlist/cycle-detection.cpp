

#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *prev;

    Node()
    {
        this->next = NULL;
        this->prev = nullptr;
        this->data = 0;
    }

    Node(int x)
    {
        this->data = x;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

void print(Node* &head){
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n\n";
    

}

bool cycleDetection(Node* head){

    // for empty list
    if(head == nullptr){
        cout << "Empty List \n";
        return false;
    }

    // for only one node
    if(head->next == nullptr){
        cout << "List contain only one element \n";
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr){
        fast = fast->next;
        if(fast != nullptr){
            fast = fast->next;
            slow = slow->next;
        }

        if(fast == slow){
            cout << "Cycle detected at " << slow->data << " node \n" ;
            // return true;
            break;;
        }
        

    }
    slow = head;
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = nullptr;
    cout << "starting point " <<slow->data << endl;

    return false;
}


int main()
{

    cout << "\n\n\n";
    // Node* head = nullptr;
    Node *head = new Node(10);
    Node *first = new Node(20);
    Node *second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);
    Node* fifth = new Node(60);
    Node* sixsth = new Node(70);
    Node* seventh = new Node(80);
    Node* eighth = new Node(90);
    Node* nineth = new Node(100);
    Node* tenth = new Node(110);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixsth;
    sixsth->next = seventh;
    seventh->next = eighth;
    eighth->next = nineth;
    nineth->next = tenth;
    tenth->next = fifth;

    int k = 4;

    
    bool res = cycleDetection(head);
    print(head);
    

    cout << "\n\n\n";

    return 0;
}