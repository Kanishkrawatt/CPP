long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        //  Get the Max Number of the arr;
        int maxnum = *max_element(arr,arr+n);
        // Initializing The Sum
        int sum =0;
        
        // add the sum of all the elements
        for(int i=0;i<n;i++){
            sum = sum + arr[i];
            maxnum = max(sum,maxnum);
            // if the sum upto any number is less than zero than 
            // set sum to zero or don't include that number to the Array
            if(sum<0){
                sum = 0;
            }
        }
        return maxnum;