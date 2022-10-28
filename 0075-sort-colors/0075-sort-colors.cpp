class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        
        for(int i=0;i<n-1;i++){
            int mini=i;
            
            for(int j=i+1;j<n;j++){
                if(arr[mini]>arr[j]){
                    mini=j;
                    // break;
                }
            }
            if(mini!=i){
                swap(arr[mini],arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};