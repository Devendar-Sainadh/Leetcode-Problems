class Solution {
public:
    bool isPalindrome(int x) {
        int real=x;
       long long int rev=0;
        int rem;
        while(x>0){
            rem=x%10;
            rev=rev*10+rem;
            x/=10;
        }
        
       return real==rev;
    }
};
