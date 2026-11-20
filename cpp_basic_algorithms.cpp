#include <iostream>
#include <cmath>

using namespace std;

// 7) Даны три целых числа X, Y, Z. Найти минимальное из этих трех чисел.
void task7() {
    int a, b, c;
    cin >> a >> b >> c;
    int minVal = a;
    if (b < minVal) minVal = b;
    if (c < minVal) minVal = c;
    cout << minVal << endl;
}

// 8) Даны три целых числа X, Y, Z. Удвоить эти числа, если Z >= Y >= X,
// и заменить их абсолютными значениями, если это не так.
void task8() {
    int a, b, c;
    cin >> a >> b >> c;
    if (c >= b && b >= a) {
        a *= 2;
        b *= 2;
        c *= 2;
    } else {
        if (a < 0) a = -a;
        if (b < 0) b = -b;
        if (c < 0) c = -c;
    }
    cout << a << " " << b << " " << c << endl;
}

// 9) Даны целые числа X, Y (Y != X). Меньшее заменить их полусуммой,
// а большее - их удвоенным произведением.
void task9() {
    int a, b, c, d;
    cin >> a >> b;
    if (a > b) {
        c = 2 * a * b;
        d = (a + b) / 2;
    } else if (a < b) {
        c = (a + b) / 2;
        d = 2 * a * b;
    }
    cout << c << " " << d << endl;
}

// 10) Даны два целых числа X, Y (X != Y). Найти большее, если X отрицательное,
// и меньшее, если это не так.
void task10() {
    int X, Y;
    cin >> X >> Y;
    if (X < 0) {
        cout << (X > Y ? X : Y) << endl;
    } else {
        cout << (X < Y ? X : Y) << endl;
    }
}

// 11) Дано натуральное число. Определить, является ли оно квадратом какого-либо натурального числа.
void task11() {
    int n;
    cin >> n;
    int i = 1;
    while (i * i < n) {
        i++;
    }
    if (i * i == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

// 12) Задана точка с координатами x и y. Определить, в какой координатной четверти она расположена.
void task12() {
    int x, y;
    cin >> x >> y;
    if (x > 0 && y > 0) cout << "1 chetvert" << endl;
    else if (x < 0 && y > 0) cout << "2 chetvert" << endl;
    else if (x < 0 && y < 0) cout << "3 chetvert" << endl;
    else if (x > 0 && y < 0) cout << "4 chetvert" << endl;
    else cout << "Tochka lezhit na osi" << endl;
}

// 13) Даны действительные числа a и b - стороны прямоугольника. Найти периметр и площадь.
void task13() {
    float a, b;
    cin >> a >> b;
    float S = a * b;
    float P = 2 * (a + b);
    cout << "Perimetr = " << P << endl;
    cout << "Ploshad = " << S << endl;
}

// 14) Даны действительные числа A, B, C. Можно ли построить треугольник с такими сторонами.
void task14() {
    float A, B, C;
    cin >> A >> B >> C;
    if (A + B > C && A + C > B && B + C > A)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

// 15) Найти площадь треугольника (используя формулу Герона).
void task15() {
    float A, B, C;
    cin >> A >> B >> C;
    float p = (A + B + C) / 2;
    float S = sqrt(p * (p - A) * (p - B) * (p - C));
    cout << "Ploshad = " << S << endl;
}

// 16) Дана точка. Лежит ли она в кольце (между радиусами R1 и R2).
void task16() {
    float x, y, R1, R2;
    cin >> x >> y >> R1 >> R2;
    float dist2 = x * x + y * y;
    if (dist2 >= R1 * R1 && dist2 <= R2 * R2)
        cout << "Tochka lezhit v koltse" << endl;
    else
        cout << "Tochka ne lezhit v koltse" << endl;
}

int main() {
    // Вызов нужной задачи для проверки, например:
    task16();
    return 0;
}
