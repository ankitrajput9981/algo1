#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


 // } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       
       int start = 0;
       int pe = 0;
       int count=0;
       
       for(int i=0;i<2*n;i++)
       {
           if(count == n)
            break;
            
           if(p[i%n].petrol + pe >= p[i%n].distance)
           {
               pe += p[i%n].petrol - p[i%n].distance;
               count++;
           }
           
           else
           {
               start = i%n + 1;
               pe=0;
               count=0;
           }
       }
       
       if(count != n)
        return -1;
        
       return start;
    }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
