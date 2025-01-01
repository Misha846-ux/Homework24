#pragma once
class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction();
	Fraction(int new_numerator, int new_denominator);
	void setNumerator(int new_numerator);
	void setDenominator(int new_denominator);
	void multiplicationFraction(Fraction& factor);
	Fraction operator*(Fraction& factor);
	void divisionFraction(Fraction& factor);
	Fraction operator/(Fraction& factor);
	void addFraction(Fraction& term);
	Fraction operator+(Fraction& term);
	void minusFraction(Fraction& term);
	Fraction operator-(Fraction& term);
	float getNumerator();
	float getDenominator();
	void showFraction();
};

