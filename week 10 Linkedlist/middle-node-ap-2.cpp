
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

Node *findMiddle(Node *&head)
{

    if (head == nullptr)
    {
        cout << "List is Empty \n";
        return head;
    }

    if (head->next == nullptr)
    {
        return head;
    }

    Node *fast = head;
    Node *slow = head;

    while (fast->next != nullptr)
    {

        fast = fast->next;
        if (fast->next != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }

    return slow;
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

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout << (findMiddle(head))->data << "\n";

    cout << "\n\n\n";

    return 0;
}