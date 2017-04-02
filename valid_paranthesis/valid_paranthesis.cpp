/*
 * valid_paranthesis.cpp
 *
 *  Created on: Apr 1, 2017
 *      Author: bhushan
 */

//Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.


#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include <strings.h>
#include <string.h>
#include <stdlib.h>
#include <stack>

using namespace std;

class Solution {
public:
	bool isValid(string s) {
		char *array;
		int length = s.length();
		for(int j=0;j<length;j++)
		{
			array[j] = s[j];
		}
		for(int k=0;k<length;k++)
		{
			cout<<array[k];
		}
		if(length==0) return true;
		stack<char> stack;

		for(int i=0; i<length; i++)
		{
			if(array[i]=='(' || array[i]=='{' || array[i]=='[' )
			{
				stack.push(array[i]);
			}
			if(array[i]==')' ||array[i]=='}' ||array[i]==']')
			{
				if(stack.empty()) return false;

				char temp = stack.top();
				if((temp=='(' && array[i]==')' ) || (temp=='{' && array[i]=='}' ) ||(temp=='[' && array[i]==']' )  )
				{
					continue;
					stack.pop();
				}else
				{
					return false;
				}
			}
		}
		if(!stack.empty()) return false;
		return true;
	}
};

int main(void)
{
	Solution sol;
	string str = "{[(())]}";
	if(sol.isValid(str))
	{
		cout<<"string is valid"<<endl;
	}
	else{
		cout<<"string is invalid"<<endl;
	}
	return 0;
}
