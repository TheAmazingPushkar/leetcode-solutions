// this is a shortcut solution
//the better proper solution involves using pointers
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int no = nums1.size();
        int medianSt,medianLt;
        if(no%2==0) { //even case
        medianSt =no/2;
        medianLt = no/2-1;
        return (nums1[medianSt]+nums1[medianLt])/2.0;
        }
        else { //odd case
            int medianNo = (no)/2;
            return nums1[medianNo];
        }
        
        
                  
        }
        
    
};