#include <iostream>
#include <vector>
using namespace std;

// Function to input array elements
void inputArray(vector<double>& arr) {
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < arr.size(); ++i) {
        cin >> arr[i];
    }
}

// Function to calculate the product of negative elements
double calculateNegativeProduct(const vector<double>& arr) {
    double negative = 1.0;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] < 0) {
            negative *= arr[i];
        }
    }
    if (negative == 1.0) {
        negative = 0.0;
    }
    return negative;
}

// Function to find the maximum element and sum positive elements before it
void findMaxAndSumPositive(const vector<double>& arr, double& max_element, double& sum_of_positives) {
    max_element = arr[0];
    int nomer = 0;
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > max_element) {
            max_element = arr[i];
            nomer = i;
        }
    }
    sum_of_positives = 0.0;
    for (int i = 0; i < nomer; ++i) {
        if (arr[i] > 0) {
            sum_of_positives += arr[i];
        }
    }
}

// Function to print the reversed array
void printReversedArray(const vector<double>& arr) {
    cout << "Измененный массив (обратный порядок):\n";
    for (int i = arr.size() - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

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