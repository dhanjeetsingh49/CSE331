// First algo -- working fine space getting more (segmentation error)

#include <iostream>
using namespace std;
//N--soldiers
//Z--Pain's strength
//Attsking power of soldiers
int largest(int arr[], int n)
{
    int i;
    int max = arr[0];

    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}


int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	while((testcase--)!=0){
	    int N;
	    cin>>N;
	    
	    int Z;
	    cin>>Z;
	    
	    int arr[N];
	    int temp=0;
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	    }
	    int count =0;
	    
	   int value=largest(arr,N);
	  
	   while(value!=0 && Z>0)
	  { 
	      count++;
	      Z-=value;
	   value/2;}
	
	if(Z>0){
	    cout<<"Ecacuted"<<endl;
	}
	else{
	    cout<<count;
	}
	}
	
	return 0;
	//write by dhanjeet

}
//Second algo
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
    cin>>t;
    
    while(t--) {
        int N, i,Z,temp;
        cin>>N>>Z;
        
        priority_queue<int> A;
        for(i=0;i<N;i++){
            cin>>temp;
            A.push(temp);
        }
        
        int hits=0;
        while(A.top()!=0 && Z>0){
            hits++;
            temp = A.top();
            Z-=temp;
            A.pop();
            A.push(temp/2);
        }
        
        if(Z>0)
            cout<<"Evacuate"<<endl;
        else
            cout<<hits<<endl;
    }
    return 0;
}
