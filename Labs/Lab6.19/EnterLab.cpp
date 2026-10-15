#include <iostream>
#include <vector>
#include "Header.h"
using namespace std;
int main() {
    // Вводим размер массива
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    // Создаем массив
    vector<double> arr(n);

    // Вводим элементы массива
    inputArray(arr);

    // Вычисляем произведение отрицательных элементов
    double negative = calculateNegativeProduct(arr);
    cout << "Произведение отрицательных элементов: " << negative << endl;

    // Находим максимальный элемент и суммируем положительные элементы до него
    double max_element, sum_of_positives;
    findMaxAndSumPositive(arr, max_element, sum_of_positives);
    cout << "Сумма положительных элементов до максимального: " << sum_of_positives << endl;

    // Выводим измененный массив
    printReversedArray(arr);

    return 0;
}