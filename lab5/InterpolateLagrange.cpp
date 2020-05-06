#include <iostream>
#include <cmath> 

double InterpolateLagrangePolynomial(double x, double* x_values, double* y_values, int size)
{
	double result = 0, basics_pol;

	for (int i = 0; i < size; i++)
	{
        std::cout << "Step: " << i << std::endl;
		basics_pol = 1.0;
		for (int j = 0; j < size; j++)
		{
            // std::cout << "j = " << j << "\t";
			if (j == i)
				continue;
			std::cout << "j = " << j << "\t";
			basics_pol *= ((x - x_values[j]) / (x_values[i] - x_values[j]));
			std::cout << basics_pol << std::endl;
		}
		result += (basics_pol * y_values[i]);
		std::cout << "Result: " << result << std::endl;
	}
	return result;
}

double func(double x)
{
	return (pow(x, 3) + (3 * pow(x, 2)) + (3 * x) + 1);
}

int main(int argc, const char *argv[])
{
	const int size = 4;
	double x_values[size];
	double y_values[size];

	for (int i = 0; i < size; i++)
	{
		x_values[i] = i+1; 
		y_values[i] = func(i+1);
		std::cout << "y_values[i] = " << y_values[i] << std::endl;
	}

	std::cout << "Answer: " << InterpolateLagrangePolynomial(6.0, x_values, y_values, size) << std::endl;
	return 0;
}
