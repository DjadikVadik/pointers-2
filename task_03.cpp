//   Завдання 3. Використовуючи два покажчики на масиви
//   цілих чисел, скопіювати один масив у інший так, щоб
//   у другому масиві елементи знаходилися у зворотному
//   порядку.
//   Використовувати в програмі арифметику покажчиків
//   для просування по масиву, а також оператор розіменування.

#include <iostream>

void show(int* Arr, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << *(Arr + i) << "\t";
	std::cout << "\n\n";
}

void copi_revers(int*& Arr1, int*& Arr2, int size)
{
	for (int i = 0; i < size; i++)
		*(Arr2 + i) = *(Arr1 + size - 1 - i);
}


int main()
{
	system("chcp 1251 > 0");

	int size = 10;

	int* pArr1 = new int[size];    // создаем одномерный динамический массив

	for (int i = 0; i < size; i++) //заполняем массив числами от 1 -10
		*(pArr1 + i) = i + 1;

	std::cout << "исходный массив :\n";
	show(pArr1, size);

	int* pArr2 = new int[size];  // создаем второй одномерный динамический массив

	copi_revers(pArr1, pArr2, size);    // копируем и изменяем последовательность на противоположную во втором массиве

	std::cout << "скопированный массив :\n";
	show(pArr2, size);

	delete[] pArr1;
	delete[] pArr2;

}