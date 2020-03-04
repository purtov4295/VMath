#include <iostream>
using namespace std;

int main()
{
    // double mas[3][4] = {-1, -1, 1, -1,
    //                     2, -1, 2, 3,
    //                     3, -1, 1, 3};
    
    // double mas[3][4] = {2, -1, 2, 3,
    //                     -1, -1, 1, -1,
    //                     3, -1, 1, 3};
       

    // double mas[3][4] = {3, -1, 1, 3,
    //                     -1, -1, 1, -1,
    //                     2, -1, 2, 3};
    
    // double mas[3][4] = {1, -3, 2, 7,
    //                     4, 6, 1, 3,
    //                     2, 1, -2, -1};
    
    double mas[3][4] = {5, 5, 5, 5,
                        5, 5, 5, 5,
                        5, 5, 5, 5};

    // if(abs(mas[1][0]) < abs(mas[2][0])){
    //    double c=mas[1][0]/mas[2][0];
    //     cout << c << endl;
    //     }              
    if(abs(mas[0][0]) > abs(mas[1][0]) && abs(mas[0][0]) > abs(mas[2][0]))
    {
        for (int i = 3; i >= 0; i--)
        {
            mas[1][i] = mas[1][i] - ((mas[1][0]/mas[0][0])*mas[0][i]);
            mas[2][i] = mas[2][i] - ((mas[2][0]/mas[0][0])*mas[0][i]);                   
        }
        if (abs(mas[1][1]) > abs(mas[2][1]))
        {
            for (int i = 3; i > 0; i--)
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

            for (int i = 3; i > 0; i--)
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
        for (int i = 3; i >= 0; i--)
        {
            mas[1][i] = mas[1][i] - ((mas[1][0]/mas[0][0])*mas[0][i]);
            mas[2][i] = mas[2][i] - ((mas[2][0]/mas[0][0])*mas[0][i]);                   
        }
        if(mas[1][0] == 0 && mas[1][1] == 0 && mas[1][2] == 0 && mas[1][3] == 0)
        {
            for (int i = 0; i < 4; i++)
            {
                swap(mas[0][i], mas[1][i]);
            }
        }

        if (abs(mas[1][1]) > abs(mas[2][1]))
        {
            for (int i = 3; i > 0; i--)
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

            for (int i = 3; i > 0; i--)
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
        for (int i = 3; i >= 0; i--)
        {
            mas[1][i] = mas[1][i] - ((mas[1][0]/mas[0][0])*mas[0][i]);
            // cout << mas[1][i] << endl;
            mas[2][i] = mas[2][i] - ((mas[2][0]/mas[0][0])*mas[0][i]);                   
            // cout << mas[2][i] << endl;
        }

        if(mas[1][0] == 0 && mas[1][1] == 0 && mas[1][2] == 0 && mas[1][3] == 0)
        {
            for (int i = 0; i < 4; i++)
            {
                swap(mas[0][i], mas[1][i]);
            }
        }

        if (abs(mas[1][1]) > abs(mas[2][1]))
        {
            for (int i = 3; i > 0; i--)
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

            for (int i = 3; i > 0; i--)
            {
                mas[2][i] = mas[2][i] - ((mas[2][1]/mas[1][1])*mas[1][i]);                 
            // cout << mas[2][2] << endl;
            }
        }
    }
    // cout << mas[2][0] << endl;
    double x , y, z;
    if(mas[2][2] != 0){
        z = mas[2][3] / mas[2][2];
        cout << "z = " << z << endl;
    }
    else cout << "z = любое число" << endl;
    if(mas[1][1] != 0){
        y = (mas[1][3]-(mas[1][2] * z)) / mas[1][1];
        cout << "y = " << y << endl;
    }
    else cout << "y = любое число" << endl;
    if(mas[0][0] != 0){
        x = (mas[0][3] - mas[0][1] * y - mas[0][2] * z) / mas[0][0];
        cout << "x = " << x << endl;
    }
    else cout << "x = любое число" << endl;
    
    system("pause");
    return 0;
}
