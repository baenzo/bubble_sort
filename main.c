#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

int main()
{
	const int ARRAY_LENGTH = 100;

	int data_set[ARRAY_LENGTH];

	for (int i = 0; i < ARRAY_LENGTH; i++)
	{
		data_set[i] = i;
	}

	srand(2149);

	for (int i = 0; i < 100000; i++)
	{
		int rnd_index_1 = rand() % 100;
		int rnd_index_2 = rand() % 100;

		int buffer = data_set[rnd_index_1];
		data_set[rnd_index_1] = data_set[rnd_index_2];
		data_set[rnd_index_2] = buffer;
	}

	bubble_sort(data_set, ARRAY_LENGTH);

	for (int i = 0; i < ARRAY_LENGTH; i++)
	{
		printf("%d\n", data_set[i]);
	}

	return 0;
}

























