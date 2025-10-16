class Solution {
  public:
    void printTriangle(int n) {
        // code here
for(int i=0;i<n;i++)
        {
            for(int j=0;j<2*n;j++)
            {
                if((j<=n-i-1)||(j>=n+i))
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
       }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<2*n;j++)
            {
                if((j<=n-i-1)||(j>=n+i))
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            
        }
       cout<<endl; 
    }}
};
