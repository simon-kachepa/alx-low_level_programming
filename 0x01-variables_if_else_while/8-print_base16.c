#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that prints numbers in hexadecimal using putchar
 * Return: 0 (Success)
 */

int main(void)
{
	int nums1 = 48;
	int nums2 = 97;

	while (nums1 <= 57)
	{
		putchar(nums1);
		nums1++;
	}
	while (nums2 <= 102)
	{
		putchar(nums2);
		nums2++;
	}
	putchar('\n');
	return (0);
}
