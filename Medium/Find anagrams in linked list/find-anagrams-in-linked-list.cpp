//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList() {
    int n; // length of link list
    scanf("%d ", &n);

    char data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i) {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
/*

Definition for singly Link List Node
struct Node
{
    char data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

You can also use the following for printing the link list.
printList(Node* node);
*/

class Solution {
  public:

     bool isana(string a,string b){
         if(a.size()!=b.length())return false;
         
         
         int hash[26]={0};
        //  int hashb[26]={0};
         
         for(int i=0;i<a.size();i++){
             hash[a[i]-'a']++;
         }
         for(int i=0;i<b.size();i++){
             hash[b[i]-'a']--;
         }
         for(int i=0;i<26;i++){
             if(hash[i]!=0){
                 return false;
             }
         }
         return true;
         
         
         
         
     }
  
    vector<Node*> findAnagrams(struct Node* head, string s) {
    
    
    if(head==NULL)return {};
    
    vector<Node*>abhi;
    
    Node*first=head;
    Node *last=NULL;
    
    while(head!=NULL){
        string temp="";
        for(int i=0;i<s.length();i++){
            if(first==NULL)return abhi;
            temp+=first->data;
            last=first;
            first=first->next;
        }
        
        if(isana(s,temp)){
            abhi.push_back(head);
            last->next=NULL;   
            
        }
        else{
            first=head->next;   ///if not the valid 
        }
        
        head=first;  //since no overlapping allowed so reset it to the same
        
        
        
    }
    
    
    return abhi;
    
    
    
    
    
    
    
    }
    
    
    
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        struct Node *head = inputList();

        string s;
        cin >> s;

        Solution obj;
        vector<Node *> res = obj.findAnagrams(head, s);

        for (int i = 0; i < res.size(); i++) {
            printList(res[i]);
        }

        if (res.size() == 0) cout << "-1\n";
    }
}

// } Driver Code Ends