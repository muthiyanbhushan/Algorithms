/*
 * sum_two_arrays.cpp
 *
 *  Created on: Mar 17, 2017
 *      Author: bhushan
 */
// C++ program to find all pair in both arrays
// whose sum is equal to given value x
#include<bits/stdc++.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

void findPairs(int arr1[], int arr2[], int n,
                               int m, int x)
{
    // Insert all elements of first array in a hash
    unordered_set<int> s;
    for (int i=0; i<n; i++)
        s.insert(arr1[i]);

    // Subtract sum from second array elements one
    // by one and check it's present in array first
    // or not
    for (int j=0; j<m; j++)
        if (s.find(x - arr2[j]) != s.end())
            cout << arr2[j] << " "
                 << x-arr2[j] << endl;
}

// Driver code
int main()
{
    int arr1[] = {1, 0, -4, 7, 6, 4};
    int arr2[] = {0 ,2, 4, -3, 2, 1};
    int x = 8;
    int n = sizeof(arr1)/sizeof(int);
    int m = sizeof(arr2)/sizeof(int);
    findPairs(arr1, arr2, n, m, x);
    return 0;
}

