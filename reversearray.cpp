
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;

void reverse(int A[]){
   int s=0,e=3,temp;
   while(s<e)
   {
       temp=A[s];
       A[s]=A[e];
       A[e]=temp;
       s++;
       e--;
   }
    
}
int main()
{
    int A[4]={1,2,3,4};
 
    
    reverse(A);
    
    for(int i=0;i<=3;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
