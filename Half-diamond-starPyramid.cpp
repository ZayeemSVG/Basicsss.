#include<iostream>
using namespace std;//Back-end complete function Template for C++
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
           {    
               if(j>i)
                {
                    cout<<" ";
                }
                else {
                    cout<<" *";
                }
            }
            cout<<endl;
        }
        
    
    for(int i=n-1;i>0;i--)
        {
            for(int j=1;j<=n;j++)
            {
                if(j>i)
                {
                    cout<<" ";
                }
                else {
                    cout<<" *";
                }
            }
        
        cout<<endl;
        }
    }
    
};
int main()
{
	Solution myans;
    myans.printTriangle(5);
}
