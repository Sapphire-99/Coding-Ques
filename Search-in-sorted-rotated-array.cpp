#include <bits/stdc++.h> 
using namespace std;


 // } Driver Code Ends


// Function to find element in sorted array
// arr: input array
// N: size of array
// K: element to be searche
int searchInSorted(int arr[], int N, int K) 
{ 

   // Your code here
   int l=0;
   int h=N-1;
   while(l<=h){
        int mid=(l+h)/2;
        if(K==arr[mid])
            return 1;
        else if(K>arr[mid])
            l=mid+1;
        else
            h=mid-1;
        
   }
   return -1;
   
}



int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

