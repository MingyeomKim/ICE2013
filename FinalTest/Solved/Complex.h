2.	#pragma once
3.	#ifndef COMPLEX_H
4.	#define COMPLEX_H
5.
6.
7.	#include <iostream>
8.	using namespace std;
9.
10.	template < typename T = double >
11.	class Complex {
	12.		//friend Complex<T> operator+(Complex<T>&, const Complex<T>&);
13.	private:
	14.		T realPart;
	15.		T imaginaryPart;
	16.
17.	public:
	18.		Complex(T real = 0.0, T imaginary = 0.0)
		19.		{
		20.			setComplexNumber(real, imaginary);
		21.		}
	22.
		23.		Complex<T> add(Complex<T>&complex) {
		24.			Complex<T> temp(realPart + complex.realPart, imaginaryPart + complex.imaginaryPart);
		25.			return temp;
		26.
	}
	27.
		28.		void setComplexNumber(T real, T imaginary) {
		29.			realPart = real;
		30.			imaginaryPart = imaginary;
		31.
	}
	32.
		33.		void printComplex() {
		34.			cout << "(" << realPart << "," << imaginaryPart << ")" << endl;
		35.
	}
	36.
		37.		Complex<T> subtract(Complex<T>&complex) {
		38.			Complex<T> temp(realPart - complex.realPart, imaginaryPart - complex.imaginaryPart);
		39.			return temp;
		40.
	}
	41.
		42.		Complex<T> operator-(Complex<T>&complex) {
		43.			return subtract(complex);
		44.
	}
	45.
};
46.
47.	// 외부 함수에서는 클래스의 private 멤버에 직접 접근할 수 없으므로 public으로 선언된 add함수르 사용해 객체를 리턴하였습니다. 
48.	template < typename T>
49.	Complex<T> operator+(Complex<T>&complex1, Complex<T>&complex2) {
	50.		return complex1.add(complex2);
	51.
}
52.	#endif
