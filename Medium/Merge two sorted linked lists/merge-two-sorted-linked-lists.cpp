//{ Driver Code Starts
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{ 
    
    // if(head1==NULL)return head2;
    // if(head2==NULL)return head1;
    
    
    // Node *i=head1;
    // Node *j=head2;
    
    // Node *temp1=head1;
    // Node *temp2=head2;
    // while(i && j)
    // if(j->data>=i->data){
    //     temp1=temp1->next;
    //     temp2=temp2->next;
    //     i->next=j
    //     j->next=temp1;
    //     j=temp2
    //     i=i->next;
    // }
    //  if(i->data>=j->data){
    //     temp1=temp1->next;
    //     temp2=temp2->next;
    //     i->next=j
    //     j->next=temp1;
    //     j=temp2
    //     i=i->next;
    // }
    
    
    Node *t1=head1;
    Node *t2=head2;
    Node *prev=NULL;
    Node *head=NULL;
    while(t1!=NULL&&t2!=NULL){
        
        if(t1->data<t2->data){
            
            if(prev!=NULL){
                prev->next=t1;
                prev=t1;
            }
            else
            {
                prev=t1;
                head=prev;
            }
            t1=t1->next;
        }
        else{
            
            if(prev!=NULL){
                
                prev->next=t2;
                prev=t2;
            }
            else
            {
                prev=t2;
                head=prev;
            }
            t2=t2->next;
            
        }
    }
    
    if(t1!=NULL){
        
        prev->next=t1;
    }
    if(t2!=NULL){
        
        prev->next=t2;
    }
    
    
    return head;
    
    
    
    
    
    
    
    
    
    
}  