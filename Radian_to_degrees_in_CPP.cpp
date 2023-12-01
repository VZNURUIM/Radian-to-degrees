#include <iostream>

using namespace std;

double radiano(double r) {
	return r * 57.2958;
}

int main() {
	double number_radiano{};

	cout << "Digite o radiano: ";
	cin >> number_radiano;

	cout << "Radiano para graus: " << radiano(number_radiano);

	return 0;
}
