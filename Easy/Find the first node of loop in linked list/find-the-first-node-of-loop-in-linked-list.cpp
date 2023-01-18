//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
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


// } Driver Code Ends
//User function Template for C++

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
    
    
    Node* answernode=head;
    
    
    while(1){
        
        if(answernode==NULL)return -1;
        if(answernode->data<0)break;
        answernode->data*=(-1);
        answernode=answernode->next;
        
        
    }
    return (answernode->data)*(-1);
    
    
    

    
    

    }
    
    
    
    
    // int findFirstNode(Node* head)
    // {
    //     // your code here
    //   // floyd cycle detection algo used
    //     Node* s=head;
    //     Node* f=head;
    //     bool cycle = false;
    //     while(f&&s){
    //         s=s->next;
    //         f=f->next->next;
    //         if(f==s){
    //             cycle = true;
    //             break;
    //         }
    //     }
    //   // if cycle is absent then return -1 ( as per question )
    //     if(cycle==false){
    //         return -1;
    //     }
    
    
    
    //   // else return first node value of the loop or cycle
    //     s=head;
    //     while(s!=f){
    //         s=s->next;
    //         f=f->next;
    //     }
    //     return s->data;
    // }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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
        int ans = ob.findFirstNode(head);
        cout<<ans<<"\n";
    }
	return 0;
}
// } Driver Code Ends