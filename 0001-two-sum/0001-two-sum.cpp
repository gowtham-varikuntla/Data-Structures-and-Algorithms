class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
        vector<int> res;
        for(int i = 0; i < arr.size()-1;i++){
            for(int j = i+1;j < arr.size();j++){
                if(arr[i] + arr[j] == k){
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;
    }
};