class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++)
        {
            int c=1;
            int mc=i;
            for(int j=1;j<=2*n;j++)
            {
                if(j<=i)
                {
                    
                    cout<<" "<<c;
                    c+=1;
                }
                
                else if(j>2*n-i)
                {
                    cout<<" "<<mc;
                    mc-=1;
                }
                else
                {
                    cout<<"  ";
                    
                }
            }
            cout<<endl;
        }
    }
};
