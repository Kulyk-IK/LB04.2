// Lab_04_2.cpp
// < Кулик Дмитро >
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної.
// Варіант 13

#include <iostream>
#include <iomanip>

int main() {
	double x_start, x_end, dx;
	
	std::cout << "x_start = "; std::cin >> x_start;

	do {
		std::cout << "x_end = "; std::cin >> x_end;
	} while (x_end < x_start);
	
	do {
		std::cout << "dx = "; std::cin >> dx;
	} while (dx <= 0);
	
	std::cout << std::fixed;
	std::cout << "--------------------------" << std::endl;
	std::cout << "|" 
		<< std::setw(4) << "x"
		<< std::setw(7) << "|"
		<< std::setw(7) << "y"
		<< std::setw(7) << "|" << std::endl;
	std::cout << "--------------------------" << std::endl;

	for (double x = x_start; x <= x_end; x += dx) {
		double left_part = 2 * abs(x - 5);
		double right_part = 0.0;

		if (x < -1) {
			right_part = pow(sin(x), 2) / (1 + abs(cos(x)));
		}
		else if (x >= -1 && x <= 1) {
			right_part = pow(cos(1 / (abs(x + 2))), 2);
		}
		else {
			right_part = log(abs(x + 2));
		}

		double y = left_part - right_part;

		std::cout << "| " << std::setw(4) << x
			<< std::setw(4) << "| "
			<< std::setw(4) << y
			<< std::setw(4) << "|" << std::endl;
	}

	std::cout << "--------------------------" << std::endl;
	
	return 0;
}