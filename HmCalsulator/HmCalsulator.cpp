
#include <Windows.h>
#include <iostream>


void Plus(int num1, int num2) {
	std::cout << num1 << " + " << num2 << " = " << num1 + num2;
}
void Minus(int num1, int num2) {
	std::cout << num1 << " - " << num2 << " = " << num1 - num2;
}
void Division(int num1, int num2) {
	std::cout << num1 << " : " << num2 << " = " << num1 / num2;
}
void Multiplay(int num1, int num2) {
	std::cout << num1 << " * " << num2 << " = " << num1 * num2;
}


int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int a, b;
	std::cout << "Калькулятор" << "\n";
	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;

	void (*operations[4])(int, int) = { Plus, Minus, Division, Multiplay };
	int temp;
	std::cout << "Введите операцию, которую хотите провести с числами: 0 - сложение, 1 - вычитание, 2 - деление, 3 - умножение: ";
	std::cin >> temp;
	operations[temp](a, b);

	return 0;

}


