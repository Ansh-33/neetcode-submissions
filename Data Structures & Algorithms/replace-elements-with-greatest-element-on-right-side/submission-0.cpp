class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();

        for(int i=0; i<n-1; i++){
            int currentMax = -1;
            for(int j=i+1; j<n; j++){
                if(currentMax < arr[j]) currentMax = arr[j];
            }
            arr[i] = currentMax;
        }
        arr[n-1] = -1;
        return arr;
    }
};