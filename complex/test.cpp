#include <iostream>

using namespace std;

class Complex {
public:
    Complex() {
    }

    Complex(const double real, const double imaginary) {
    }

    Complex(const Complex& copied) {
    }

    Complex& operator=(const Complex& copied) {
    }

    ~Complex() {
    }

    bool operator!=(const Complex& other) const {
    }

    bool operator==(const Complex& other) const {
    }

    Complex operator-() const {
    }

    Complex operator+(const Complex& other) const {
    }

    Complex operator-(const Complex& other) const {
    }

    Complex operator*(const Complex& other) const {
    }

    Complex operator/(const Complex& other) const {
    }

    double module() const {
    }

    double argument() const {
    }

    Complex Conjugate() const {
    }

private:
    double _real, _imaginary;
};

int main() {

    return 0;
}
