#include <iostream>
#include <cmath>

#define eps 1E-2

using namespace std;

float func(float x) 
{
	return (pow(x, 2) + 3 * x - 2);
}

int main()
{
	int step = 0;
	float a = 0, b = 1, c = 1, d = 0;
	
    while (abs(c - d) > eps)
    {
		d = c;
		c = ((func(b) * a) - (func(a) * b)) / (func(b) - func(a));
        if ((func(a) * func(c)) < 0) 
			b = c;
		else
			a = c;
        ++step;
	}
	cout << "Количество шагов для нахождения заданной точности = " << step << endl;
    cout << "C = " << c << endl;
	return 0;
}