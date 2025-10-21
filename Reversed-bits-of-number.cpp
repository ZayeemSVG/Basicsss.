class Solution {
  public:
    long long reversedBits(long long x) {

        vector<int> vec;
        long long ans=0;
    
    for(int i=0;i<32;i++)
    {
        vec.push_back(x%2);
        x=(x/2);
        ans=ans+vec[i]*(pow(2,31-i));
    
    }
      return ans;  
    
    }
    
};
