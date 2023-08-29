/* Given a non-negative integer x, return the square root of x rounded down to the nearest integer. 
The returned integer should be non-negative as well.
You must not use any built-in exponent function or operator.
For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python. */

class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;
        int result = -1;
        if(x == 1 || x == 0){return x;}
        while(start <= end){
            long long int mid=start+(end-start)/2;
            if(mid <=x/mid){result=mid;start=mid+1;}else{end=mid-1;}
        }
        return result;
    }
};
