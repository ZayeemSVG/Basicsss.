#include<iostream>
using namespace std;
int main(){

  int n=5;
     {
        // using logic to build spaces when either less or greater than 
       //the edge values of pyramid.j starts from 1 cause i used j as counter and 
       //comparatively too.i=1 valid too but then n-i+1,,n+i-1 needed for comparison.
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=((2*n)-1);j++)
            {
                
                if((j<(n-i))||(j>(n+i))){
                    cout<<" ";
                }
                
                
                else{
                    cout<<"*";
                }
                    
                
                
            }
            cout<<endl;
        }
    }
}
