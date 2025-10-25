class Solution {
  public:
  int i=1;
    void printNos(int n) {
        // Code here
        if(i<=n){
        cout<<i<<" ";
        i++;
        printNos(n);
        }
        else return;
    }
};
