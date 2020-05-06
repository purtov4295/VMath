#include <iostream>
#include <cmath>

using namespace std;

#define eps 1E-4

int main(int argc, const char *argv[])
{
	float mas[3][4] = {5, -1, -1, 3,
                    -1, -3, 0, -7,
                    1, 1, 4, 3};
	float tmp, maxB, maxC, out[3], max[3], B[3], C[3][3], mat[3];
	int N;
	
	for (int i = 0; i < 3; i++)
	{
		tmp = mas[i][i];
		for (int j = 0; j < 4; j++)
		{
			mas[i][j] /= tmp;
			if (j == 3)
				B[i] = mas[i][j];
			out[i] = 0;
		}
	}
	
	for	(int i = 0; i < 3; i++)
	{
		max[i] = 0;
		for	(int j = 0; j < 3; j++)
		{
			C[i][j] = mas[i][j];
			C[i][i] = 0;
			max[i] += C[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		if(maxC < max[i])
			maxC = max[i];
		if(maxB < B[i])
			maxB = B[i];
	}
	
	N = (log(eps * (1 - maxC) / maxB)) / log(maxC);
	
	for (int step = 0; step <= N; step++)
	{
		for (int i = 0; i < 3; i++)
		{
			mat[i] = 0;
			for (int j = 0; j < 3; j++)
			{
				mat[i] = mat[i] + C[i][j] * out[j];
				out[i] = B[i] - mat[i];
			}
		}
	}
	
	cout << "||C|| = " << maxC << endl;
    cout << "Кол-во шагов, необходимых для достижения заданной точности: " << N << endl;
    for (int i = 0; i < 3; i++)
		cout << "x[" << i << "] = " << out[i] << endl;
	return 0;
}