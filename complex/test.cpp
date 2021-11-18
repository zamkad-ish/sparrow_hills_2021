#include <iostream>
#include <cmath>
#include <algorithm>
#define PI 3.14159
using namespace std;

class Complex {
public:
	Complex() {
	}

	Complex(const double real, const double imaginary) {
		_real = real;
		_im = imaginary;
	}

	Complex(const Complex& copied) {
		_real = copied._real;
		_im = copied._im;
	}

	Complex& operator=(const Complex& copied) {
		Complex ans(_real, _im);
		return ans;
	}

	~Complex() {
	}

	bool operator!=(const Complex& other) const {
		if (_real != other._real && _im != other._im) {
			return true;
		}
		return false;
	}



bool operator==(const Complex& other) const {
	if (_real == other._real && _im == other._im) {
		return true;
	}
	return false;
}

Complex operator-() const {
	Complex ans(-_real, -_im);
		return ans;
}


Complex operator+(const Complex& other) const {
	Complex ans(_real + other._real, _im + other._im);
		return ans;
}

Complex operator-(const Complex& other) const {
	Complex ans(_real - other._real, _im - other._im);
		return ans;
}

Complex operator*(const Complex& other) const {
	double i, j;
	i = _real * other._real - _im * other._im;
	j = _real * other._im + _im * other._real;
	Complex ans(i, j);
	return ans;
}

Complex operator/(const Complex& other) const {
	double i, j, d;
	d = other._real*other._real + other._im*other._im;
	i = (_real*other._real + _im * other._im) / d;
	j = (_real*other._im - _im * other._real) / d;
	Complex ans(i, j);
	return ans;
}

double module() const {
	double i,j;
	i = (_real*_real);
	j = (_im*_im);
	return sqrt(i + j);
}

	double argument() const {
		return atan(_real / _im);

	}

	Complex Conjugate() const {
		Complex ans(_real, -_im);
			return (ans);
	}

 private:
	double _real, _im;
};

int main() {
	int errors = 0, tests = 0;
	Complex a;

	Complex b(1, 2);
	Complex c(b);
	++tests;
	if (b != c) {
		cout << "Error: b != c" << endl;
		++errors;
	}

	Complex d(2, 3);
	++tests;
	if (b == d) {
		cout << "Error: b == d" << endl;
		++errors;
	}
	Complex e = d;
	++tests;
	if (d != e) {
		cout << "Error: d != e" << endl;
		++errors;
	}

	++tests;
	if (Complex(3, 4).module() != 5) {
		cout << "Error: |3 + 4i| != 5" << endl;
		++errors;
	}

	++tests;
	if (fabs(Complex(3, 4).argument() - 0.6435011087) > 0.0000001) {
		cout << "Error: arg(3 + 4i) != " << endl;
		++errors;
	}

	++tests;
	if (-Complex(1, -3) != Complex(-1, 3)) {
		cout << "Error: - Complex(1, -3) != Complex(-1, 3)" << endl;
		++errors;
	}

	++tests;
	if (Complex(1, -3) + Complex(4, 2) != Complex(5, -1)) {
		cout << "Error: Complex(1, -3) + Complex(4, 2) != Complex(5, -1)" << endl;
		++errors;
	}

	++tests;
	if (Complex(1, -3) - Complex(4, 2) != Complex(-3, -5)) {
		cout << "Error: Complex(1, -3) - Complex(4, 2) != Complex(-3, -5)" << endl;
		++errors;
	}

	++tests;
	if (Complex(4, 3) * Complex(1, -2) != Complex(10, -5)) {
		cout << "Error: Complex(4, 3) * Complex(1, -2) != Complex(10, -5)" << endl;
		++errors;
	}

	++tests;
	if (Complex(4, 3) / Complex(1, 2) != Complex(2, -1)) {
		cout << "Error: Complex(4, 3) / Complex(1, 2) != Complex(2, -1)" << endl;
		++errors;
	}

	cout << "Number of tests: " << tests << ", number of errors: " << errors << endl;
	system("pause");
	return 0;
}
