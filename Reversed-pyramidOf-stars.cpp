#include<iostream>
  using namespace std;
  int main(){  
  int n=5
  ;   // code here
        for(int i=n-1;i>=0;i--)
        {
            for(int j=1;j<=(2*n-1);j++)
            {
                if((j<(n-i))||(j>(n+i)))
                {
                    cout<<" ";
                    
                }
                else
                {
                    cout<<"*";
                }
            }
            cout<<endl;
        }
    }
    
