class Solution {
public:
    bool isHappy(int n) {
        if(n==4||n== 16||n== 37|| n== 58||n== 89||n== 145||n== 42 || n== 20) return false;
        int k=0;
        while(n!=0){
            k=k+((n%10)*(n%10));
            n=n/10;
        }
        if (k==1) return true;
        return isHappy(k);
    }
};