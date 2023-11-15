#include "main.h"
/**
 * print_HEX_extra - converts to hex
 * @num: value to be converted
 *
 * Return: counter
 */
int print_HEX_extra(unsigned int num)
{
	int i, counter = 0;
	int *arr;
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	arr = malloc(sizeof(int) * counter);

	for (i = 0; i < counter; i++)
	{
		arr[i] = tem % 16;
		tem = tem / 16;
	}
	for (i = counter - 1; i >= 0; i++)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 7;
		_prints(arr[i] + '0');
	}
	free(arr);

	return (counter);
}
