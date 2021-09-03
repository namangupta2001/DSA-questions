//Time complexity is O(n)
// time complexity is the real game otherwise i would have use selection sort which is as easy as this

#include<bits/stdc++.h>

using namespace std;

void sort(int A[],int n)
{
   int i,count0=0,count1=0,count2=0;
   for(int i=0;i<n;i++)
   {
       switch ( A[i])
       {
       case 0: count0++;
               break;
    
       case 1: count1++;
               break;
       case 2: count2++;
               break;
    
       }
   }

   i=0;

   while(count0>0)
   {
       A[i]=0;
       i++;
       count0--;
   }
    while(count1>0)
   {
       A[i]=1;
       i++;
       count1--;
   }
   
    while(count2>0)
   {
       A[i]=2;
       i++;
       count2--;
   }
   
 //print array
 for(int i=0;i<n;i++)
 {
     cout<<A[i]<<" "; 
 }
}
int main()
{
    int A[10]={2,2,1,1,0,0,0,0,1,2};

    sort(A,10);
    return 0;
}
