


#include<iostream>
#include<queue> 
using namespace std;

int main()
{   int k,n;
    priority_queue <int> pq;
    int A[]={7,10,4,3,20,15};
     for(int i=0;i<6;i++)
     { pq.push(-A[i]);
     }
    n=pq.size();
    cout<<"size of queue is "<<pq.size()<<endl;
    cout<<"enter k";
    cin>>k;
    while(!pq.empty())
    {
        if(pq.size()==n-k+1)
        {
            cout<<-(pq.top())<<" ";
            break;
        }
        else
        {
            pq.pop();
        }
    }
    return 0;
    
  
}
