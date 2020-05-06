#include <iostream>
#include <cmath>

#define eps 1E-2

using namespace std;

int main() {
    float W[2][2], x[2], opr, W1[2][2], F[2], S[2], e[2], max[2];
    int i, j, step = 1;
    e[0] = 1;
    e[1] = 2;
    if (abs(e[0]) >= abs(e[1])) max[1] = e[0];
    else max[1] = e[1];
    do {
        cout << "Итерация №" << step << endl << endl;
        for (i = 0; i < 2; i++) {
            x[i] = e[i];
            S[i] = 0;
        }
        max[0] = max[1];
        W[0][0] = -0.004*x[0];
        W[0][1] = 6*pow(x[1], 2);
        W[1][0] = -0.001*sin(x[0]);
        W[1][1] = -10*cos(x[1]);
        opr = W[0][0]*W[1][1] - W[0][1]*W[1][0];
        for (i = 0; i < 2; i++)
            for (j = 0; j < 2; j++){
                W1[i][j] = pow(-1, (i+j)) * W[1-j][1-i] / opr;
        }
        F[0] = -0.002*pow(x[0], 2) + 2*pow(x[1], 3) + 5;
        // cout << "F[0] = " << F[0] << endl;
        F[1] = 0.001*cos(x[0]) - 10*sin(x[1]) + 2;
        // cout << "F[1] = " << F[1] << endl;
        S[0] = W1[0][0] * F[0] + W1[0][1] * F[1];
        // cout << "S0 = " << S[0] << endl;
        S[1] = W1[1][0] * F[0] + W1[1][1] * F[1];
        // cout << "S1 = " << S[1] << endl;
        step++;
        e[0] = x[0] - S[0];
        e[0] = round(e[0]*100)/100;
        cout << "e0 = " << e[0] << endl;
        e[1] = x[1] - S[1];
        e[1] = round(e[1]*100)/100;
        cout << "e1 = " << e[1] << endl;
        if (abs(e[0]) >= abs(e[1])) max[1] = e[0];
        else max[1] = e[1];

    } while (abs(max[1] - max[0]) > eps);
    cout << "Количество шагов для нахождения заданной точности = " << step << endl;
    cout << "x = " << x[0] << "\t" << "y = " << x[1] << endl;
    return (0);
}
