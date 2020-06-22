#include "bubble_sort.h"

void bubble_sort(int *const data_set, int length)
{
	bool sorted;
	int end_of_unsorted_data = length - 1;

	/* Count of iterations  to full sorting the array equal N-1.
	 * Where N is count of array members.
	 */
	for (int i = 0; i < (length - 1); i ++)
	{
		sorted = true;

		for (int j = 0; j < (length - 1); j++)
		{
			if (j == end_of_unsorted_data)
			{
				end_of_unsorted_data --;
				break;
			}

			if (data_set[j] > data_set[j+1])
			{
				int buffer = data_set[j];
				data_set[j] = data_set[j+1];
				data_set[j+1] = buffer;

				sorted = false;

				if ((j + 1) == end_of_unsorted_data)
				{
					end_of_unsorted_data = j;
					continue;
				}
			}
		}

		if (sorted) break;
	}
}
