#include "main.h"
/**
 * print_convert_pointer - converts to hex
 * @num: integer
 *
 * Return: counter
 */
int print_convert_pointer(unsigned long int num)
{
	long int i, counter = 0;
	long int *arr;
	unsigned long int tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	arr = malloc(sizeof(long int) * counter);
	for (i = 0; i < counter; i++)
	{
		arr[i] = tem % 16;
		tem = tem / 16;
	}
	for (i = counter - 1; i >= 0; i++)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_prints(arr[i] + '0');
	}
	free(arr);
	return (counter);
}
