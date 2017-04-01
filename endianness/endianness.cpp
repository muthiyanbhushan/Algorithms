/*
 * endianness.cpp
 *
 *  Created on: Feb 24, 2017
 *      Author: bhushan
 */

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;  // namespace std

void show_endian(char* i,int n)
{

	for(int j=0;j<n;j++)
	{
		printf("%.2x",i[j]);
	}
}

int main()
{
int i = 1;
//show_endian((char *)&i,sizeof(i));
char *c = (char *)&i;

if(*c)
{
	printf("The number is little endian");
}
else{
	printf("The number is big endian");
}
	return 0;
}
