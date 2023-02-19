//{ Driver Code Starts
#include<iostream>

#include<bits/stdc++.h>
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

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
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

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    
    
     int count1=0;
    int count2=0;
    Node* tmp1=head1;
    Node* tmp2=head2;
    while(tmp1)
    {
        count1++;
        tmp1=tmp1->next;
    }
    while(tmp2)
    {
        count2++;
        tmp2=tmp2->next;
    }
    tmp1=head1;
    tmp2=head2;
    
    if(count1 > count2)
    {
        int t=count1-count2;
        while(t!=0)
        {
            tmp1=tmp1->next;
            t--;
        }
    }
    else if(count2 > count1)
    {
        int t=count2-count1;
        while(t!=0)
        {
            tmp2=tmp2->next;
            t--;
        }
    }
    while(tmp1!=tmp2 and tmp1 and tmp2)
    {
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    if(tmp1)
    {
        return tmp1->data;
    }
    return -1;
    
    
    
    
    // Node*temp1 = head1;
    // Node*temp2 = head2;
    
    // while(1){
    //     if(temp1==temp2){
    //         return temp1->data;
    //     }
        
    //     temp1 = temp1->next;
    //     temp2 = temp2->next;
    //     if(temp1==NULL && temp2==NULL){
    //         return -1;
    //     }
    //     if(temp1==NULL){
    //         temp1=head2;
    //     }
    //     if(temp2==NULL){
    //         temp2 =head1;
    //     }
    // }
    // return -1;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}

