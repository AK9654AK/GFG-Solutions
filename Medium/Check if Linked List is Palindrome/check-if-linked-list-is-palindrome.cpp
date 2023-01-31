//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        
    

    

    Node* temp=head;
    string str="";
    while(temp!=NULL)
    {
      str+=to_string(temp->data);
      temp=temp->next;
    }
    int start=0;
    int end = str.length()-1;
    while(start<end){
            if(str[start]!=str[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
        
    
        
        
        
        
        
        
        
        
        
        
        
        
        
    //     bool isPalindrome(Node *head)

    // {

    //     Node*fast = head, *slow = head, *prev,*temp;

    //     while(fast!=NULL && fast->next!=NULL)

    //     {

    //         slow = slow->next;

    //         fast = fast->next->next;

    //     }

    //     prev = slow;

    //     slow = slow->next;

    //     prev->next=NULL;

        

    //     while(slow!=NULL)

    //     {

    //         temp = slow->next;

    //         slow->next=prev;

    //         prev=slow;

    //         slow=temp;

    //     }

 

    //     fast = head;    

    //     slow = prev; 

 

    //     while(fast->next != NULL)

    //     {   

    //         if(slow->data != fast->data)

    //         {

    //             return false;

    //         }

    //         slow=slow->next;

    //         fast=fast->next;

    //     }

    //     return true;

    // }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends