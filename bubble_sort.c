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

		int plume_length = 0;

		for (int i = 0; i < (length - 1); i++)
		{
			int buffer = 0;

			if (data_set[i] > data_set[i+1])
			{
				for (int idx_j = 0; idx_j <= plume_length; ++idx_j)
				{
					buffer = data_set[i-idx_j];
					data_set[i-idx_j] = data_set[i-idx_j+1];
					data_set[i-idx_j+1] = buffer;
				}

				permutation_count ++;
			}
			else if (data_set[i] == data_set[i+1])
			{
				++ plume_length;
			}
		}

		// Если перестановок не было, значит массив отсортирован.
		if (permutation_count == 0) break;
	}

	return 0;
}
