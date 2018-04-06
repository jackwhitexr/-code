/*#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
vector<int> nums1;
vector<int> nums2;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> setans;
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        while(i<nums1.size() &&j<nums2.size()){
            if(nums1[i]<nums2[j]) i++;
            else if(nums1[i]>nums2[j]) j++;
            else if(nums1[i]==nums2[j]){
                setans.insert(nums1[i]);
                i++;j++;
            }
        }
        set<int>::iterator it;
        for(it=setans.begin();it!=setans.end();it++){
            ans.push_back(*it);
        }
        return ans;
    }
int binarySearch(vector<int> &A, int target) {
        // write your code here
        int left=0,right=A.size()-1;
        while(true){
            int middle=(left+right)/2;
            if(target==A[middle]){
                return middle;
            }
            else if(target>A[middle]){
                left=middle+1;
                if(left>right) return left;
            }
            else if(target<A[middle]){
                right=middle-1;
                if(left>right){
                    if(right<0)right=0;
                    return right+1;
                }
            }
        }
}
int main(){
    nums1.push_back(1);
    nums1.push_back(3);
    nums1.push_back(6);
    nums1.push_back(7);
    nums1.push_back(9);
    /*nums1.push_back(7);
    nums1.push_back(8);
    nums1.push_back(9);
    nums1.push_back(9);
    nums1.push_back(10);*/
    /*vector<int> ans=intersection(nums1,nums2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    int ans=binarySearch(nums1,8);
    for(int i=0;i<nums1.size();i++){
        cout<<nums1[i]<<" ";
    }
    cout<<endl<<ans;

    return 0;
}*/
