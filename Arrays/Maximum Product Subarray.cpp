//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	     long long ans= INT_MIN;
	    long long sum = 1;
	    
	    for(int i = 0; i<arr.size(); i++){
	        sum*=arr[i];
	        ans = max(ans,sum);
	        if(sum==0) sum=1;
	    }
	    
	    sum = 1;
	    for(int i = arr.size()-1; i>=0; i--){
	        sum*=arr[i];
	        ans = max(ans,sum);
	        if(sum==0) sum=1;
	    }
	    
	    return ans;
	}
};