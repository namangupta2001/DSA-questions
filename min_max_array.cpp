


#include<iostream>

using namespace std;

int main()
{
   int A[]={200,30,1,250,20,5,365};
   int min,max;
   if(A[0]<A[1])
   {
       min=A[0];
       max=A[1];
   }
   else
   {
       min=A[1];
    max=A[0];
       
   }
   for(int i=2;i<=6;i++){
       if(A[i]>max)
       {
           max=A[i];
       }
       else if(A[i]<min){
         min=A[i];  
       }
   }
   cout<<"min is "<<min<<endl;
   cout<<"max is "<<max<<endl;
   cout<<"original array is ";
    for(int i=0;i<=(sizeof(A)/sizeof(A[0]));i++){
     cout<<A[i]<<" ";
   }
  //here n is sizeofA/sizeA[0] because it was showing address of array
    return 0;
}
