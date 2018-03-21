class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int low = 0;
        int high = num/2;
         while(low<=high)
         {
             long long mid = low+(high-low)/2;
             unsigned long long  x = mid*mid;//ע������mid�����ͣ��ᰴ��mid�����ͽ��м���������ǿ��ת��
             //unsigned long long  y = (mid+1)*(mid+1);
             if(x==num) return true;
             //else if(x<num&&num<y) return false;
             else if(x>num) high = mid-1;
             else low = mid+1;
         }
        return false;
    }
};