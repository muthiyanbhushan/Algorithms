/*
 * bubble_sort.c
 *
 *  Created on: Feb 19, 2017
 *      Author: bhushan
 */

#include<stdio.h>
#include <stdint.h>
#define MAXSIZE 5

void bubble_sort(int *a)
{
	int i,j,temp;
	for(i=0;i<(MAXSIZE-1);i++)
	{
		for(j=0;j<(MAXSIZE-i-1);j++)
		{
		if(a[j] > a[j+1])
		{
			temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
		}
		}
	}
}

void insertion_sort(int *a)
{
	int value,position,i;
	for(i=1;i<MAXSIZE;i++)
	{
		value = a[i];
		position = i;
		while(position>0 && (a[position-1]>value))
				{
			a[position] = a[position-1];
			position--;
				}

		if(position != i)
		{
			a[position] = value;
		}
	}
}

void main()
{

}
