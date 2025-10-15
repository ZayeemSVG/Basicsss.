class Solution {
  public:
    void printTriangle(int n) {
        // code here
       
        for(int i=0;i<n;i++)
        {   char x='A';
            for(int j=1;j<=2*n-1;j++)
            {
                if((j<(n-i))||(j>(n+i)))
                {
                    cout<<" ";
                }
                else if(j<((2*n-1)/2)+1){
                    
                    cout<<x;
                    x=x+1;
                    
                }
                else{
                    
                    
                    cout<<x;
                    x=x-1;
                }
            }
        
            cout<<endl;
        }
    }
};
 
