#include <iostream>
#include <cmath>

using namespace std;

double first(double a[3][3])
{
    return a[0][0]*a[1][1]*a[2][2]+a[0][1]*a[1][2]*a[2][0]+a[0][2]*a[1][0]*a[2][1]-a[0][2]*a[1][1]*a[2][0]-a[0][1]*a[1][0]*a[2][2]-a[0][0]*a[1][2]*a[2][1];
}

int main()
{
    int const STROKI = 3;
    int const STOLBCI = 3;
    double a[STROKI][STOLBCI];
    for(int i = 0; i < STROKI; i++)
    {
        for(int j = 0; j < STOLBCI; j++)
        {
            cin >> a[i][j];
        }

    }
    cout << "Answer " << first(a);



    return 0;
}
