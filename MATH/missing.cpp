class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n= nums.size();
        int x;
        int H[100000]={0};
        for(int i=0;i<n;i++){
            H[nums[i]]=1;
        }
        for(int i=0;i<=n;i++){
            if(H[i]==0){
                x= i;
            }
        }
        return x;
}
};
