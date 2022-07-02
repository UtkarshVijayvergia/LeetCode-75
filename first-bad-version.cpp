// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(isBadVersion(mid)){
                if(mid==1){
                    return 1;
                }
                else{
                    if(isBadVersion(mid-1)){
                        end = mid-1;
                }
                    else{
                        return mid;
                    }
                }
            }
            else{
                if(mid==n-1){
                    return mid+1;
                }
                else{
                   if(isBadVersion(mid+1)){
                        return mid+1;
                    }
                    else{
                        start = mid+1;
                    } 
                }
            }
        }
        return -1;
    }
};
