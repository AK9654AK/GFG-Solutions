//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
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

Node* inputList(int size)
{
    if (size == 0) return NULL;

    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}


// } Driver Code Ends
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution
{
public:
    int intersectPoint(Node* head1, Node* head2)
    {
        
    
        
//         Node *curr1=head1;
//         Node *curr2=head2;
//         int count1=0;
//         int count2=0;
//         while(curr1){
            
//             count1++;
//             curr1=curr1->next;
//         }
        
        
//          while(curr2){
            
//             count2++;
//             curr2=curr2->next;
//         }
        
        
        
//         if(count1==count2){
            
//             Node *temp1=head1;
//             Node *temp2=head2;
//             for(int i=0;i<count1;i++){
                
//                 if(temp1 == temp2)return temp2->next->data;
//                 else {temp1=temp1->next; temp2=temp2->next;}
//             }
//         }
//         else{
//             if(count1>count2){
//                 int diff=count1-count2;
//                  Node *temp1=head1;
//                  Node *temp2=head2;
                 
//                 while(diff--){
                    
//                     temp1=temp1->next;
//                 }
                
//                  for(int i=0;i<count1-diff;i++){
                
//                 if(temp1 == temp2)return temp2->data;
//                 else {temp1=temp1->next; temp2=temp2->next;}
                
//             } 
//              //////////////////////////////// TOO MUCH REDUNDANT CODDDDEEEEE And not working for test case 4
//             if(count2>count1){
//                 int diff=count2-count1;
//                  Node *temp1=head1;    ///////////////////////3 6 5
// // 63 96 55
// // 65 61 78 51 48 11
// // 98 30 94 19 48
//                  Node *temp2=head2;
                 
//                 while(diff--){
                    
//                     temp2=temp2->next;
//                 }
                
//             }
//                 for(int i=0;i<count1-diff;i++){
                
//                 if(temp1 == temp2)return temp2->data;
//                 else {temp1=temp1->next; temp2=temp2->next;}
//             }
            
            
            
//             }
        
        
        
        
        
        
        
        
        
//         }
        
        
        
        
        
          int len1=0;
         int len2=0;
         Node *node1=head1;
         Node *node2=head2;
         
         //to find length
         while(node1){
             len1++;
             node1=node1->next;
         }
         while(node2){
             len2++;
             node2=node2->next;
         }
         node1=head1;
         node2=head2;
         int diff=0;
         if(len1>len2){
             diff=len1-len2;
             while(diff--){
                 node1=node1->next;
             }
         }
         else{
             diff=len2-len1;
             while(diff--){
                 node2=node2->next;
             }
         }
         while(node1&&node2){
             if(node1==node2){
                 return node1->data;
             }
             node1=node1->next;
             node2=node2->next;
         }
         return -1;
	
}
        
        
        
        
        
        
        
        
        
        
        
        
    
};



//{ Driver Code Starts.


/* Driver program to test above function*/
int main()
{
    int T, n1, n2, n3;

    cin >> T;
    while (T--)
    {
        cin >> n1 >> n2 >> n3;

        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);

        Node* temp = head1;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;

        temp = head2;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;
        
        Solution ob;
        cout << ob.intersectPoint(head1, head2) << endl;
    }
    return 0;
}


// } Driver Code Ends