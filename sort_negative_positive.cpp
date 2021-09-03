

#include<bits/stdc++.h>
#include<queue> 
using namespace std;

int main()
{   
    priority_queue <int> pq;
    int A[]={7,-2,5,-16,12,0};

     for(int i=0;i<6;i++)
     { 
 
           pq.push(-A[i]);
         
    
     }
  
    while(!pq.empty())
    {
         int a=pq.top();
              pq.pop();
            cout<<-a<<" ";
   
    }
    return 0;
    
  
}