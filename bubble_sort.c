#include "bubble_sort.h"

int bubble_sort(int *const data_set, int length)
{
	// Проверяем параметры на корректность.
	if (data_set == NULL) return -1;
	if (length <= 0) return -2;

	for ( ; length > 1; length--)
	{
		// Счетчик перестановок.
		int permutation_count = 0;

		for (int i = 0; i < (length - 1); i++)
		{
			if (data_set[i] > data_set[i+1])
			{
				int buffer = data_set[i];
				data_set[i] = data_set[i+1];
				data_set[i+1] = buffer;

				permutation_count ++;
			}
		}

		// Если перестановок не было, значит массив отсортирован.
		if (permutation_count == 0) break;
	}

	return 0;
}
