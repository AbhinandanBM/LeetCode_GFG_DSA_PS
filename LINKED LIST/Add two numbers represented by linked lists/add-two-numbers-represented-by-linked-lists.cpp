//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    // Reverse a Linked List
    Node *Reverse(Node *curr,Node *prev){
        if(curr==NULL)
        return prev;
        
        Node *front=curr->next;
        curr->next=prev;
        return Reverse(front,curr);
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // Reverse the both lists
        first=Reverse(first,NULL);
        second=Reverse(second,NULL);
        
        Node *curr1=first,*curr2=second;
        int carry=0;
        Node *head=new Node(0);
        Node *tail=head;
        
        // Addition of both lists and store it
        while(curr1 && curr2){
            int sum=curr1->data+curr2->data+carry;
            tail->next=new Node(sum%10);
            tail=tail->next;
            curr1=curr1->next;
            curr2=curr2->next;
            carry=sum/10;
        }
        
        // still first list exists
        while(curr1){
            int sum=curr1->data+carry;
            tail->next=new Node(sum%10);
            tail=tail->next;
            curr1=curr1->next;
            carry=sum/10;
        }
        
        // still second list exists
        while(curr2){
            int sum=curr2->data+carry;
            tail->next=new Node(sum%10);
            tail=tail->next;
            curr2=curr2->next;
            carry=sum/10;
        }
        
        // still carry exists
        while(carry){
            tail->next=new Node(carry%10);
            carry/=10;
        }
        
        // reverse the ans list leaving dummy node
        head=Reverse(head->next,NULL);
        return head;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends