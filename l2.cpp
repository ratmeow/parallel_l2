#include <iostream>
using namespace std;

int main()
{
    int N = 10;
    double matrix [N][N];
    double matrix2 [N][N];
    float min_value = -0.5;
    float max_value = 0.5;
    double n = 0.001*(rand()%1001 -500);
    //cout<<n;
    for(int i =0;i<N;i++)
    {
        for(int j =0; j<N;j++)
        {
            matrix[i][j] = 0.001*(rand()%1001 -500);
            matrix2[i][j] = 0.001*(rand()%1001 -500);
        }
    }

    for(int i =0;i<N;i++)
    {
        for(int j =0; j<N;j++)
        {
            cout.precision(4);
            cout.width(10);
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"Second matrix"<<endl;

        for(int i =0;i<N;i++)
    {
        for(int j =0; j<N;j++)
        {

            cout.width(10);
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}