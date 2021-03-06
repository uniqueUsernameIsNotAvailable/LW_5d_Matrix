#ifndef LW_5A_ARRAY_H
#define LW_5A_ARRAY_H

#include <stddef.h>
#include <math.h>

/*!
 * Обменивает значения
 * @param a - указатель на первую переменную
 * @param b - указатель на вторую переменную
 * @param size - размер участвующих в обмене элементов
 */
void swap(void *a, void *b, size_t size);

/*!
 * Нахождение макс. элемента массива
 * @param a - указатель на массив
 * @param length - длина массива
 * @return макс. элемент массива а
 */
int getMax(const int *a, int length);

/*!
 * Нахождение мин. элемента массива
 * @param a - указатель на массив
 * @param length - длина массива
 * @return мин. элемент массива а
 */
int getMin(const int *a, int length);

/*!
 * Определяет уникальность массива
 * @param a - указатель на массив
 * @param length - длина массива
 * @return 0 или 1
 */
_Bool isUnique(const long long *a, int length);

/*!
 * Нахождение суммы массива
 * @param a - указатель на массив
 * @param length - длина массива
 * @return сумма массива а
 */
long long getSum(const int *a, int length);

/*!
 * Опредеоение максимума из двух целочис. знач.
 * @param a
 * @param b
 * @return макс. элемент из двух
 */
int max(int a, int b);

/*!
 * Опредеоение минимума из двух целочис. знач.
 * @param a
 * @param b
 * @return мин. элемент из двух
 */
int min(int a, int b);

/*!
 * Нахождение расстояния между точками по формуле
 * @param a - указатель на массив
 * @param n - длина массива
 * @return расстояние в виде числа с плавающей запятой
 */
float getDistance(int *a, int n);

/*!
 * Функция-компаратор
 * @param pa
 * @param pb
 * @return
 */
int cmp_long_long(const void *pa, const void *pb);

/*!
 * Подсчёт уникальных элементов в массиве а
 * @param a - указатель на массив
 * @param n - длина массива
 * @return кол-во уникальных элементов в массиве
 */
int countNUnique(long long *a, int n);

/*!
 * Определяет, отсортирован ли массив а по неубыванию
 * @param a - указатель на массив
 * @param n - длина массива
 * @return 0 или 1
 */
_Bool isNonDescendingSorted(const int *a, int n);

/*!
 * Подсчёт кол-ва элементов равных values
 * @param a - указатель на массив
 * @param n - длина массива
 * @param value - значение для подсчёта
 * @return кол-во элементов равных values
 */
int countValues(const int *a, int n, int value);


// ввод массива data размера n
void inputArray_(int *a, size_t n);

// вывод массива data размера n
void outputArray_(const int *a, size_t n);

// возвращает значение первого вхождения элемента x
// в массиве a размера n при его наличии, иначе - n
size_t linearSearch_(const int *a, const size_t n, int x);

// возвращает позицию вхождения элемента x
// в отсортированном массиве a размера n при его наличии, иначе - SIZE_MAX
size_t binarySearch_(const int *a, const size_t n, int x);

// возвращает позицию первого элемента равного или большего x
// в отсортированном массиве a размера n
// при отсутствии такого элемента возвращает n
size_t binarySearchMoreOrEqual_(const int *a, const size_t n, int x);

// вставка элемента со значением value
// в массив data размера n на позицию pos
void insert_(int *a, size_t *n, size_t pos, int value);

// добавление элемента value в конец массива data размера n
void append_(int *a, size_t *n, int value);

// удаление из массива data размера n элемента на позиции pos
// с сохранением порядка оставшихся элементов
void deleteByPosSaveOrder_(int *a, size_t *n, size_t pos);

// удаление из массива data размера n элемента на позиции pos
// без сохранения порядка оставшихся элементов
// размер массива data уменьшается на единицу
void deleteByPosUnsaveOrder_(int *a, size_t *n, size_t pos);

// возвращает значение ’истина’ если все элементы
// массива data размера n соответствует функции-предикату predicate
// иначе - ’ложь’ int all_(const int *a, size_t n, int (*predicate)(int));

// возвращает значение ’истина’ если хотя бы один элемент
// массива data размера n соответствует функции-предикату predicate
// иначе - ’ложь’
int any_(const int *a, size_t n, int (*predicate)(int));

// применяет функцию predicate ко всем элементам массива source
// размера n и сохраняет результат в массиве dest размера n
void forEach_(const int *source, int *dest, size_t n, const int (*predicate)(int));

// возвращает количество элементов массива data размера n
// удовлетворяющих функции-предикату predicate
int countIf_(const int *a, size_t n, int (*predicate)(int));

// удаляет из массива data размера n все элементы, удовлетворяющие
// функции-предикату deletePredicate, записывает в n новый размер
// массива
void deleteIf_(int *a, size_t *n, int (*deletePredicate )(int));

#endif //LW_5A_ARRAY_H