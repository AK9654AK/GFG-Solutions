//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    Node *Reverse(Node *head)
    {
        if(head == NULL || head->next == NULL)
            return head;
        Node *current=head,*prev=NULL,*nextnode = NULL;
        while(current != NULL)
        {
            nextnode = current->next;
            current->next = prev;
            prev = current;
            current = nextnode;
        }
        return prev;
    }
    Node *Middle(Node *head)
    {
        if(head == NULL || head->next == NULL)
            return head;
        Node *fast =head, *slow = head;
        while(fast!= NULL && fast->next != NULL && fast->next->next!= NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        if(head == NULL || head->next == NULL)
            return head;
        Node *middle = Middle(head);
        Node *nhead = middle->next;
        middle->next = NULL;
        nhead = Reverse(nhead);
        Node *curr1 = head;
        Node *curr2 = nhead;
        while(curr1 != NULL && curr2 != NULL)
        {
            int temp = curr1->data;
            curr1->data = curr2->data-temp;
            curr2->data = temp;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        nhead = Reverse(nhead);
        middle->next = nhead;
        return head;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends