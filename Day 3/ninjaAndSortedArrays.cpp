// Link : https://www.codingninjas.com/codestudio/problems/merge-two-sorted-arrays_8230835?challengeSlug=striver-sde-challenge&leftPanelTab=0

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	
	int i = m-1;
	int j = n-1;

	int k = m+n-1;

	while(i>=0 && j>=0){
		if(arr1[i]>arr2[j]){
			arr1[k] = arr1[i];
			i--;
			k--;
		}else{
			arr1[k] = arr2[j];
			j--;
			k--;
		}
	}

	// Now add the remaining elements of arr2

	while(j>=0){
		arr1[k] = arr2[j];
		k--;
		j--;
	}

	return arr1;
}

/*
	Anlysis:
	Time Complexity : O(m+n)
	Space Complexity : O(1)
*/