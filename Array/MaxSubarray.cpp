o(n3)
int maxi= INT_MIN;
        for(int i=0;i<n; i++){
            for(int j=i; j<n; j++){
               int sum=0;
                for(int k=i; k<=j; k++){
                    sum+= nums[k];
                }

                maxi= max(sum, maxi);
            }
        }
        return maxi;

--------------------------------------------------------------
o(n)
nt maxi = INT_MIN; // maximum sum

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];

            maxi = max(maxi, sum); // getting the maximum
        }
    }

    return maxi;
------------------------------------------------------------------------------

int left = 0, right = 0; // 2 pointers
    long long sum = a[0];
    int maxLen = 0;
    while (right < n) {
        // if sum > k, reduce the subarray from left
        // until sum becomes less or equal to k:
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }
        // if sum = k, update the maxLen i.e. answer:
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        // Move forward thw right pointer:
        right++;
        if (right < n) sum += a[right];
    }

    return maxLen;
}

