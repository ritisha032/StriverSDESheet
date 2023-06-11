int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here

	//logic:- all elements before single element first index- even second
	//index-odd
	//all elements after single element first index-odd second index-even

	int start=0,end=arr.size()-1;

	int mid=end+(start-end)/2;

	while(start<=end){

		//single element found;
		if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1])
			return arr[mid];

		else if( ((arr[mid]==arr[mid+1]) && mid%2==0) || 
		((arr[mid]==arr[mid-1]) && mid%2!=0))
			{
                    // first occurunce-even || second occurence-odd
					//repeated elements lies on the right
					start=mid+1;
                }

                else {
                  end = mid - 1;
                }

                mid = end + (start - end) / 2;
        }

                return -1;
}