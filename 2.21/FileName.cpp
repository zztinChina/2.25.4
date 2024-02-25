#include<stdio.h>
#include<string.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		int tem = 0;
		tem = *left;
		*left = *right;
		*right = tem;
		left++;
		right--;
	}
}
void fan(char* arr1, int k)
{
	int len = strlen(arr1);
	reverse(arr1, arr1 + k - 1);
	reverse(arr1+k, arr1+len-1);
	reverse(arr1, arr1+len-1);
	//printf("%s", arr1);
}
int  pan(char* arr1, char* arr2)
{
	int len = strlen(arr1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		fan(arr1, 1);
		int he=strcmp(arr1, arr2);
		if (he == 0)
		return he;
	}
	return 1;
}
int main()
{
	char arr1[] = { "abcdefg" };
	char arr2[] = { "bcdefgac" };
	int rel=pan(arr1, arr2);
	if (rel == 0)
	{
		printf("是回转字符串");
	}
	else if (rel == 1)
	{
		printf("不是回转字符串");

	}
	return 0;
}
