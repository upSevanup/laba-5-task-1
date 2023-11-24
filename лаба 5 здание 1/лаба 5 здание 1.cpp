#include <iostream>
#include <clocale>

using namespace std;

/* 
* Лабораторная работа 5. Поливцев Михаил, ИВТ-31. Задание 1 (со статическим выделением памяти).
* Индивидуальный вариант 16.
* Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N).
* Найти среднее арифметическое элементов массива с номерами от K до L включительно.
*/

int main() {
	setlocale(LC_ALL, "ru");

	const int max_size = 10;
	int lst[max_size];
	int n, k, l;
	double s = 0;
	cout << "Введите размер массива, числа K и L соответственно >> ";
	cin >> n >> k >> l;
	if (!(1 <= k && k <= l && l <= n) || n > max_size) {
		cout << "неверный ввод";
		return 1;
	}
	for (int i = 0; i < n; i++) {
		cout << "Введите элемент массива >> ";
		cin >> lst[i];
	}

	for (int i = k; i <= l; i++) {
		s += lst[i];
	}
	s /= (l - k + 1);

	cout << s << endl;
}