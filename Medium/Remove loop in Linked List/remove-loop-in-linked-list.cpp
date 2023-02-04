//{ Driver Code Starts
// driver code

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}


// } Driver Code Ends
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
  
        Node *slow=head;
        Node *fast=head;
        
        if(head==NULL||head->next==NULL)
        return;
        
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            break;
        }
        
        
        
        
        if(slow!=fast)
        return;
        
        
    //   The while loop continues until the "slow" pointer and the "fast" pointer meet.
    //   When they meet, the "slow" pointer is pointing to the starting node of the loop. 
        
        
        slow = head;
        while(slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        
        // A new pointer "p" is initialized to the node 
        // immediately following the starting node of the loop. 
        // The while loop continues until "p->next" equals "slow", marking the last node of the loop.
        
        
        Node* p = slow->next;
        while(p->next != slow)
            p = p->next;
        p->next = NULL;
        
        
        



// void removeLoop(Node* head)
//     {
//         Node * ptr = head;
//         while(ptr<ptr->next){              //// Only works if the all nodes data is sorted.
//             ptr = ptr->next;
//         }
//         ptr->next = NULL;
//     }













        
        
        
        // slow=head;
        // while(fast->next!=slow->next)
        // {
        //     fast=fast->next;
        //     slow=slow->next;
        // }
                                                 /////Giveing  wrong output for x=1;
             
        // fast->next=NULL;
        return;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
//         Node *slow=head; 
//         Node *fast=head;

//         while(slow->next&&fast->next&&fast->next->next) {
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast) {
//                 break;
//             }
//         }
//         if(slow!=fast)return;
        
        
//         ////To get the starting Node of the loop
        
//         slow=head;
// while(fast->next!=slow->next)
// {
//     fast=fast->next;
//     slow=slow->next;
// }


// fast->next=NULL;



// return head;
        
       
      
       
       

    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        ob.removeLoop(head);
        
        if( isLoop(head) || length(head)!=n )
            cout<<"0\n";
        else
            cout<<"1\n";
    }
	return 0;
}

// } Driver Code Ends
