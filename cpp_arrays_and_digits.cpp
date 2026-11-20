#include <iostream>
#include <vector>

using namespace std;

// 1) Дано двузначное натуральное число. Найти сумму и произведение его цифр.
void sumAndProductOfDigits() {
    int a;
    cin >> a;
    int tens = a / 10;
    int units = a % 10;
    cout << tens + units << " " << tens * units << endl;
}

// 2) Дано двузначное целое число. Вывести число, полученное при перестановке цифр.
void reverseTwoDigitNumber() {
    int a;
    cin >> a;
    int units = a % 10;
    int tens = a / 10;
    cout << (units * 10) + tens << endl;
}

// 3) Дано четырехзначное натуральное число. Определить, все ли цифры числа различны.
void checkUniqueDigits() {
    int e;
    cin >> e;
    int a = e / 1000;
    int b = (e / 100) % 10;
    int c = (e % 100) / 10;
    int d = e % 10;

    if (a != b && a != c && a != d && b != c && b != d && c != d) {
        cout << "razlicni" << endl;
    } else {
        cout << 0 << endl;
    }
}

// 4) Дано четырехзначное натуральное число. Определить, имеется ли в записи числа цифра 3.
void containsDigitThree() {
    int e;
    cin >> e;
    int a = e / 1000;
    int b = (e / 100) % 10;
    int c = (e % 100) / 10;
    int d = e % 10;

    if (a == 3 || b == 3 || c == 3 || d == 3) {
        cout << "da" << endl;
    } else {
        cout << "net" << endl;
    }
}

// 5) Найти среднее арифметическое всех элементов массива.
void arrayAverage() {
    int n;
    cin >> n;
    vector<float> a(n);
    float sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    cout << sum / n << endl;
}

// 6) Найти минимальный элемент в массиве.
void arrayMinimum() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minVal = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < minVal) {
            minVal = a[i];
        }
    }

    cout << minVal << endl;
}

int main() {
    // Пример запуска функции поиска минимума в массиве:
    arrayMinimum();
    return 0;
}
