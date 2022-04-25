//   Завдання 1. Використовуючи два покажчики на масив цілих
//   чисел, скопіювати один масив у інший.Використовувати
//   в програмі арифметику покажчиків для просування по
//   масиву, а також оператор розіменування.

#include <iostream>

void show(int* Arr, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << *(Arr + i) << "\t";
	std::cout << "\n\n";
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

	for (int i = 0; i < size; i++)  // копируем данные одного массива в другой
		*(pArr2 + i) = *(pArr1 + i);

	std::cout << "скопированный массив :\n";
	show(pArr2, size);

	delete[] pArr1;
	delete[] pArr2;

}