#include <iostream>
#include <algorithm>

using namespace std;

// Шаблонная функция для поиска максимума
template<typename T>
T findMax(const T* array, int size) {
    T maxVal = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }
    return maxVal;
}

// Шаблонная функция для поиска минимума
template<typename T>
T findMin(const T* array, int size) {
    T minVal = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < minVal) {
            minVal = array[i];
        }
    }
    return minVal;
}

// Шаблонная функция для сортировки массива (используется алгоритм сортировки sort)
template<typename T>
void sortArray(T* array, int size) {
    sort(array, array + size);
}

// Шаблонная функция для двоичного поиска в отсортированном массиве (используется алгоритм двоичного поиска binary_search)
template<typename T>
bool binarySearch(const T* array, int size, const T& target) {
    return binary_search(array, array + size, target);
}

// Шаблонная функция для замены элемента массива на переданное значение
template<typename T>
void replaceElement(T* array, int size, const T& oldValue, const T& newValue) {
    for (int i = 0; i < size; ++i) {
        if (array[i] == oldValue) {
            array[i] = newValue;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    

    // Создание и инициализация массива
    int intArray[] = { 5, 2, 8, 1, 9 };
    double doubleArray[] = { 3.14, 1.23, 2.71, 0.99 };

    // Поиск максимума
    int intMax = findMax(intArray, 5);
    cout << "Максимальное значение в intArray: " << intMax << endl;

    double doubleMax = findMax(doubleArray, 4);
    cout << "Максимальное значение в doubleArray: " << doubleMax << endl;

    // Поиск минимума
    int intMin = findMin(intArray, 5);
    cout << "Минимальное значение в intArray: " << intMin << endl;

    double doubleMin = findMin(doubleArray, 4);
    cout << "Минимальное значение в doubleArray: " << doubleMin << endl;

    // Сортировка массива
    sortArray(intArray, 5);
    cout << "Отсортированный intArray: ";
    for (int i = 0; i < 4; ++i) {
        cout << intArray[i] << ", ";
    }
    cout << intArray[4] << endl;

    sortArray(doubleArray, 4);
    cout << "Отсортированный doubleArray: ";
    for (int i = 0; i < 3; ++i) {
        cout << doubleArray[i] << ", ";
    }
    cout << doubleArray[3] << endl;

    // Двоичный поиск
    int targetInt = 8;
    bool intFound = binarySearch(intArray, 5, targetInt);
    if (intFound) {
        cout << "Значение " << targetInt << " найдено в intArray." << endl;
    }
    else {
        cout << "Значение " << targetInt << " не найдено в intArray." << endl;
    }

    double targetDouble = 1.23;
    bool doubleFound = binarySearch(doubleArray, 4, targetDouble);
    if (doubleFound) {
        cout << "Значение " << targetDouble << " найдено в doubleArray." << endl;
    }
    else {
        cout << "Значение " << targetDouble << " не найдено в doubleArray." << endl;
    }

    // Замена элемента
    int oldValue = 2;
    int newValue = 10;
    replaceElement(intArray, 5, oldValue, newValue);
    cout << "intArray после замены: ";
    for (int i = 0; i < 4; ++i) {
        cout << intArray[i] << ", ";
    }
    cout << intArray[4] << endl;

    return 0;
}

