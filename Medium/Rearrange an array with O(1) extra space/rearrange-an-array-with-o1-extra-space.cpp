//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    // void arrange(long long arr[], int n) {
        
        
        
        /*

Approach


 

1.Actually we do not declare a extra space so we need to design a formula


 

2.And we need to store the two values

a[i] and a[a[i]] on a same place means we have to assign a number to a[i] place so that when we divide it by n

it gives number a[a[i]] and when it is modulo by n it gives a[i].


 

3.And it is given that each element lies between 0 to n-1


 

So if we find modulo of element with n

it will give that number like this

3%4 = 3


 

And if we divide that element with n it will give 0. because element is smaller than n it is given

2/3 = 0


 

4 0 2 1 3


 

// used method

// divident = divisor * quotient + rem to generate this array


 

19 20 12 1 8

 

 

19/5 = 3 

20/5 = 4

12/5 = 2

1/5 = 0

8/5=1

 

*/

 

void arrange(long long a[], int n) {
       for(int i=0;i<n;i++)a[i]=a[i]+((a[a[i]])%n)*n;
       for(int i=0;i<n;i++)a[i]=a[i]/n;
   }
        
        
        
    
};


//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin>>t;
    while(t--){
        
        int n;
        //size of array
        cin>>n;
        long long A[n];
        
        //adding elements to the array
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        //calling arrange() function
        ob.arrange(A, n);
        
        //printing the elements 
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends