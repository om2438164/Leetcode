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


int left = 0, right = 0;

while (right < nums.size()) {
    // expand the window
    window.addLast(nums[right]);
    right++;
    
    while (window needs shrink) {
        // shrink the window
        window.removeFirst(nums[left]);
        left++;
    }
}

// revise problems mentioned in notebook 