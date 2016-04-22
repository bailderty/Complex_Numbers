//
//  ComplexNumber.cpp
//  Complex_Numbers
//
//  Created by Brett Meyer on 4/21/16.
//  Copyright © 2016 Brett Meyer. All rights reserved.
//

#include "ComplexNumber.h"
// constructors
ComplexNumber::ComplexNumber()
{
    ComplexNumber * num = new ComplexNumber();
    num->real = 0;
    num->imag = 0;
}

ComplexNumber::ComplexNumber(double real_part, double imaginary_part)
{
    ComplexNumber * num = new ComplexNumber();
    num->real = real_part;
    num->imag = imaginary_part;
}

ComplexNumber::ComplexNumber(const ComplexNumber & rhs)
{
    ComplexNumber * num = new ComplexNumber();
    num->real = rhs.real;
    num->imag = rhs.imag;
}
// named member functions
bool ComplexNumber::equals(const ComplexNumber & rhs) const
{
    if (this->real == rhs.real && this->imag == rhs.imag) {
        return true;
    }
    return false;
}

void ComplexNumber::print(ostream & out) const
{
    if (real < 0) {
        out << '-';
    }
    out << real << ' ';
    if (imag < 0) {
        out << "- ";
    }
    out << imag;
}
// assignment operators
const ComplexNumber & ComplexNumber::operator=(const ComplexNumber & rhs)
{
    if (this != &rhs) {
        real = rhs.real;
        imag = rhs.imag;
    }
    return *this;
}

const ComplexNumber & ComplexNumber::operator+=(const ComplexNumber & rhs)
{
    real = real + rhs.real;
    imag = imag + rhs.imag;
    return *this;
}

const ComplexNumber & ComplexNumber::operator-=(const ComplexNumber & rhs)
{
    real = real - rhs.real;
    imag = imag - rhs.imag;
    return *this;
}

const ComplexNumber & ComplexNumber::operator*=(const ComplexNumber & rhs)
{
    real = real * rhs.real;
    imag = imag * rhs.imag;
    return *this;
}
// arithmetic operators
ComplexNumber operator+(const ComplexNumber & lhs, const ComplexNumber & rhs)
{
    ComplexNumber answer(lhs);
    answer += rhs;
    return answer;
}

ComplexNumber operator-(const ComplexNumber & lhs, const ComplexNumber & rhs)
{
    ComplexNumber answer(lhs);
    answer -= rhs;
    return answer;
}

ComplexNumber operator*(const ComplexNumber & lhs, const ComplexNumber & rhs)
{
    ComplexNumber answer(lhs);
    answer *= rhs;
    return answer;
}
// relational operators
bool operator==(const ComplexNumber & lhs, const ComplexNumber & rhs)
{
    return lhs.equals(rhs);
}

bool operator!=(const ComplexNumber & lhs, const ComplexNumber & rhs)
{
    return !lhs.equals(rhs);
}
// I/O operators
ostream & operator<<(ostream & out, const ComplexNumber & n)
{
    n.print(out);
    return out;
}

istream & operator>>(istream & in, ComplexNumber & n)
{
    int r,i;
    char c;
    in >> r;
    in.get(c);
    in >> i;
    if (c == '-') {
        i = i * -1;
    }
    n = ComplexNumber(r,i);
    return in;
}







