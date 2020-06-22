void bubble_sort(int *const data_set, int length)
{
	int end_of_unsorted_data = length - 1;

	for (int i = 0; i < (length - 2); i ++)
	{
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

				if ((j + 1) == end_of_unsorted_data)
				{
					end_of_unsorted_data = j;
					continue;
				}
			}
		}
	}
}
