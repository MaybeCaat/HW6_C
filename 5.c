#include <stdio.h>

int ispolnitel(int num) {
    // разделяем по цифрам исходное число num:
    // 1-ая цифра - в переменную num1, 2-ая - в num2, 3-я - в num3
    int num3 = num % 10, num2 = num % 100 / 10, num1 = num / 100;
    // в n1 записываем произведение 1-ой и 2-ой цифры, а в n2 - 2-ой и 3-ей
    int n1 = num1 * num2, n2 = num2 * num3;
    // так как нам нужно расположить в порядке невозрастания, то если они так и распложены изначально,
    // то просто возвращаем
    // так как это числа, то 1-е умножаем на 10 (или на 100, если второе число двузначное) и прибавляем 2-е
    if (n1 >= n2) return n1 * (n2 < 10 ? 10 : 100) + n2;
    // иначе ставим наоборот
    return n2 * (n2 < 10 ? 10 : 100) + n1;
}

int main() {
    // создаём переменную для num и вводим его
    int num;
    scanf("%d", &num);
    // выводим результат исполнителя с помощью функции ispolnitel
    printf("%d", ispolnitel(num));
    return 0;
}
