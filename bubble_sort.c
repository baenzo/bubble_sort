#include "bubble_sort.h"

int bubble_sort(int *const data_set, int length)
{
	if (data_set == NULL)
	{
		return -1;
	}

	if (length <= 0)
	{
		return -1;
	}

	bool sorted = true;

	for ( ; length > 1; length--)
	{
		sorted = true;

		for (int i = 0; i < (length - 1); i++)
		{
			if (data_set[i] > data_set[i+1])
			{
				int buffer = data_set[i];
				data_set[i] = data_set[i+1];
				data_set[i+1] = buffer;

				sorted = false;
			}
		}

		if (sorted) break;
	}

	return 0;
}
