class Solution {
public:
    void merge(vector<int>& arr, int start, int end){
            int mid = start + (end - start)/2;
            int len1 = (mid-start)+1;
            int len2 = end-mid;
            int *first = new int[len1];
            int *second = new int[len2];
            int arrpoint = start;
            for(int i=0;i<len1;i++){
                first[i]=arr[arrpoint++];
            }
            arrpoint = mid+1;
            for(int i=0;i<len2;i++){
                second[i]=arr[arrpoint++];
            }
            //merge
            int firstp = 0;
            int secondp = 0;
            arrpoint = start;
            while (firstp<len1 && secondp<len2){
                if(first[firstp]<=second[secondp]){
                    arr[arrpoint++]=first[firstp++];
                }else{
                    arr[arrpoint++]=second[secondp++];                    
                }
            }
            while (firstp<len1){
                arr[arrpoint++]=first[firstp++];
            }
            while (secondp<len2){
                arr[arrpoint++]=second[secondp++];
            }
            delete[] first;
            delete[] second;
        }
        void mergeSort(vector<int>& arr, int start, int end){
            if (start>=end){
                return;
            }
            int mid = start + (end - start)/2;
            mergeSort(arr,start,mid);
            mergeSort(arr,mid+1,end);
            merge(arr,start,end);
        }
    vector<int> sortArray(vector<int>& nums) {
        
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};