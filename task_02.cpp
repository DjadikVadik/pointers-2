//  Завдання 2. Використовуючи покажчик на масив цілих
//  чисел, змінити порядок проходження елементів масиву
//  на протилежний.
//  Використовувати в програмі арифметику покажчиків
//  для просування по масиву, а також оператор розіменування.

#include <iostream>

void show(int* Arr, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << *(Arr + i) << "\t";
	std::cout << "\n\n";
}

void revers(int*& Arr, int size)
{
	for (int i = 0; i < size / 2; i++)
		std::swap(*(Arr + i), *(Arr + size - 1 - i));
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

	revers(pArr1, size);    // изменяем последовательность на противоположную

	std::cout << "изменённый массив :\n";
	show(pArr1, size);

	delete[] pArr1;

}