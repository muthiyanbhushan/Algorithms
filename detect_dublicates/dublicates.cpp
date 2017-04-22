/*
 * dublicates.cpp
 *
 *  Created on: Apr 22, 2017
 *      Author: bhushan
 */

#include <vector>
#include "iostream"
#include "stdio.h"

using namespace std;

int removeDuplicates(vector<int>& nums) {
	int n = nums.size(), count = 0;
	for (int i = 2; i < n; i++)
		if (nums[i] == nums[i - 2 - count]) count++;
		else nums[i - count] = nums[i];
	return n - count;

}
vector<int> removDuplicates(vector<int>& nums) {
	vector<int> temp;

	volatile int count;
	int n = nums.size();
	for (int i = 0; i < n;){
		temp.push_back(nums[i]);
		count = 0;
		for(int j = (i+1);j<n;j++){
			if(nums[i] == nums[j])
			{
				count++;
			}

		}
		i=i+count+1;
	}
	return temp;

}

int main()
{
	vector<int> array;
	vector<int> array1;
	int arr[10] = {1,1,2,3,4,5,6,6,7};
	for(int i=0;i<9;i++)
	{
		array.push_back(arr[i]);
	}

	for(int k=0;k<array.size();k++)
	{
		//cout << "1" << endl;
		cout << array[k] << " ";
	}

	array1 = removDuplicates(array);


	printf("\n \n ");
	for(int j=0;j<array1.size();j++)
		{
			cout << array1[j] << " ";
		}

	return 0;
}

