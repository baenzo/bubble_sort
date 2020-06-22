void bubble_sort(int *const data_set, int length)
{
	for (int i = 0; i < (length - 2); i ++)
	{
		for (int j = 0; j < (length - 1); j++)
		{
			if (data_set[j] > data_set[j+1])
			{
				int buffer = data_set[j];
				data_set[j] = data_set[j+1];
				data_set[j+1] = buffer;
			}
		}
	}
}
