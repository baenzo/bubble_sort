/**
 * @file
 * @author Stanislav K.
 * */

#ifndef BUBBLE_SORT_H_
#define BUBBLE_SORT_H_

#include <stddef.h>
/**
 * Выполняет сортировку массива по-возрвстанию (от большего к меньшему).
 * @param [in] data_set Указатель на первый элемент массива.
 * @param [in] length Количество элементов в массиве.
 *
 * @return
 * 0 - Если сортировка выполнена успешно.\n
 * -1 - Если data_set равно NULL.\n
 * -2 - Если length меньше, либо равно нулю.\n
 * */
extern int bubble_sort(int *const data_set, int length);

#endif
