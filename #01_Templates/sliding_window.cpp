// for fixed sized window

int i=0,j=0;
int k;
// k is window size 
while(j<k){
    // perform some operation 
    j++;
}
while(j<arr.size()){
    sum+=arr[i];
    //add first element
    sum-=arr[j];
    // remove last element 
    // maintain the window 
    i++,j--;
}

// for variable size window 


int i = 0, j = 0;

while (j < nums.size()) {
    // expand the window
    window.addLast(nums[j]);
    j++;
    
    while (window needs shrink) {
        // shrink the window
        window.removeFirst(nums[i]);
        i++;
    }
}




// another template from leetcode for variable size s.w 
// imp

int fn(vector<int>& arr) {
    int i = 0, j=0, ans = 0, curr = 0;

    while (j < arr.size()) {
        // do logic here to add arr[right] to curr
        // expand the window 

        while (WINDOW_CONDITION_BROKEN) {
            // remove arr[left] from curr or 
            // shrink the window
            i++;
        }

        // update ans
        j++;
    }

    return ans;
}

// revise problems mentioned in notebook 