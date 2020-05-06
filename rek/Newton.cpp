#include <iostream>
#include <cmath>

#define eps 1E-2

using namespace std;

float func(float x) 
{
	return (pow(x, 2) + 3 * x - 2);
}

float PRfunc(float x) 
{
    return (2 + 3);
}   
 
int main() 
{
	float a = 0, b = 1, c = b, d = 0;
	int step = 0;
	
	while (abs(c - d) > eps)
    {
		d = c;
		c = c - (func(c) / PRfunc(c));
        ++step;
	}
	cout << "Количество шагов для нахождения заданной точности = " << step << endl;
    cout << "C = " << c << endl;
	return 0;
}