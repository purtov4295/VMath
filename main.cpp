#include <iostream>
using namespace std;

int main()
{
    double mas[3][4] = {-1, -1, 1, -1,
                        2, -1, 2, 3,
                        -3, -1, 1, 3};

    // if(abs(mas[1][0]) < abs(mas[2][0])){
    //     cout << mas[2][2] << endl;
    //     }              
    if(abs(mas[0][0]) > abs(mas[1][0]) && abs(mas[0][0]) > abs(mas[2][0]))
    {
        for (int i = 0; i < 4; i++)
        {
            mas[1][i] = mas[1][i] + ((mas[1][0]/mas[0][0])*mas[0][i]);
            mas[2][i] = mas[2][i] + ((mas[2][0]/mas[0][0])*mas[0][i]);                   
        }
        if (abs(mas[1][1]) > abs(mas[2][1]))
        {
            for (int i = 1; i < 4; i++)
            {
                mas[2][i] = mas[2][i] - ((mas[2][1]/mas[1][1])*mas[1][i]);               
            }
        }
        
        else
        {
            for (int i = 1; i < 4; i++)
            {
                swap(mas[1][i], mas[2][i]);
            }

            for (int i = 1; i < 4; i++)
            {
                mas[2][i] = mas[2][i] - ((mas[2][1]/mas[1][1])*mas[1][i]);            
            }
        }
    }


    else if(abs(mas[1][0]) > abs(mas[2][0])){
        for (int i = 0; i < 4; i++)
        {
            swap(mas[0][i], mas[1][i]);
        }
        for (int i = 0; i < 4; i++)
        {
            mas[1][i] = mas[1][i] - ((mas[1][0]/mas[0][0])*mas[0][i]);
            mas[2][i] = mas[2][i] - ((mas[2][0]/mas[0][0])*mas[0][i]);                   
        }

        if (abs(mas[1][1]) > abs(mas[2][1]))
        {
            for (int i = 1; i < 4; i++)
            {
                mas[2][i] = mas[2][i] - ((mas[2][1]/mas[1][1])*mas[1][i]);         
            }
        }
        
        else
        {
            for (int i = 1; i < 4; i++)
            {
                swap(mas[1][i], mas[2][i]);
            }

            for (int i = 1; i < 4; i++)
            {
                mas[2][i] = mas[2][i] - ((mas[2][1]/mas[1][1])*mas[1][i]);             
            }
        }
    }


    else{
        for (int i = 0; i < 4; i++)
        {
            swap(mas[0][i], mas[2][i]);
        }
        for (int i = 0; i < 4; i++)
        {
            mas[1][i] = mas[1][i] - ((mas[1][0]/mas[0][0])*mas[0][i]);
            cout << mas[1][i] << endl;
            mas[2][i] = mas[2][i] - ((mas[2][0]/mas[0][0])*mas[0][i]);                   
            // cout << mas[2][i] << endl;
        }

        if (abs(mas[1][1]) > abs(mas[2][1]))
        {
            for (int i = 1; i < 4; i++)
            {
                mas[2][i] = mas[2][i] - ((mas[2][1]/mas[1][1])*mas[1][i]);                  
            }
        }
        
        else
        {
            for (int i = 1; i < 4; i++)
            {
                swap(mas[1][i], mas[2][i]);
            }

            for (int i = 1; i < 4; i++)
            {
                mas[2][i] = mas[2][i] - ((mas[2][1]/mas[1][1])*mas[1][i]);                 
            // cout << mas[2][2] << endl;
            }
        }
    }
    // cout << mas[2][0] << endl;
    double x = 2/3, y, z;
    cout << x << endl;
//     z = mas[2][3]/mas[2][2];
//     y = (-(mas[1][2]*z))/mas[1][1];
//     cout << z << endl;
// cout << y << endl;
//     system("pause");
    return 0;
}
