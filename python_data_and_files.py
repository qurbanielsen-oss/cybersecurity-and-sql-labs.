# 1) Подсчет частоты встречаемости слов в текстовом файле
def word_count(filename: str) -> dict:
    counts = {}

    # Менеджер контекста safely закрывает файл после выхода из блока
    with open(filename, "r", encoding="utf-8") as file:
        for line in file:
            # Приводим к нижнему регистру и разбиваем по пробелам
            words = line.lower().split()
            for word in words:
                # Очищаем от простейших знаков препинания
                word = word.strip(".,!?;:")
                if word:
                    # Увеличиваем счетчик слова в словаре
                    counts[word] = counts.get(word, 0) + 1

    return counts


# 2) Фильтрация и сортировка списка словарей (filter, sorted)
def filter_and_sort_products(products: list[dict], min_price: float) -> list[dict]:
    # Фильтруем товары, цена которых >= min_price
    filtered = filter(lambda p: p['price'] >= min_price, products)

    # Сортируем полученный результат по ключу 'price'
    sorted_products = sorted(filtered, key=lambda p: p['price'])

    return list(sorted_products)


if __name__ == "__main__":
    # Пример 1: Создание тестового файла и подсчет слов
    with open("input.txt", "w", encoding="utf-8") as f:
        f.write("Hello world! Hello python programming.")

    print("Word count:", word_count("input.txt"))

    # Пример 2: Фильтрация и сортировка товаров
    items = [
        {"name": "Mouse", "price": 25.5},
        {"name": "Keyboard", "price": 45.0},
        {"name": "USB Cable", "price": 5.0},
        {"name": "Monitor", "price": 150.0}
    ]

    result = filter_and_sort_products(items, 20.0)
    print("Filtered & sorted products:", result)
import random

# 1) Таблица умножения (вложенные циклы for)
def multiplication_table():
    for i in range(1, 11):
        for j in range(1, 11):
            p = i * j
            print(f"{p:3}", end=" ")
        print()


# 2) Вывод чисел, кратных 5, от 5 до 50
def multiples_of_five():
    for i in range(1, 11):
        p = i * 5
        print(p, end=" ")
    print()


# 3) Рисование заполненного квадрата из символов
def draw_filled_square(n: int, simvol: str = "*"):
    for i in range(n):
        for j in range(n):
            print(simvol, end=" ")
        print()


# 4) Рисование полого квадрата (рамки) из символов
def draw_hollow_square(n: int, simvol: str = "*"):
    for i in range(n):
        for j in range(n):
            if i == 0 or j == 0 or i == n - 1 or j == n - 1:
                print(simvol, end=" ")
            else:
                print(" ", end=" ")
        print()


# 5) Консольная игра "Угадай число" (while True, random)
def guess_the_number():
    secret_num = random.randint(1, 100)
    count = 0

    while True:
        user_input = int(input("Ugaday chislo (ot 1 do 100, 0 dlya vyhoda): "))
        count += 1

        if user_input == 0:
            print("Vyhod iz igry.")
            break
        elif user_input < secret_num:
            print("Chislo bolshe!")
        elif user_input > secret_num:
            print("Chislo menshe!")
        else:
            print("Bingo!")
            print("Kolichestvo popytok:", count)
            break


if __name__ == "__main__":
    print("--- Таблица умножения ---")
    multiplication_table()

    print("\n--- Полый квадрат 5x5 ---")
    draw_hollow_square(5)
