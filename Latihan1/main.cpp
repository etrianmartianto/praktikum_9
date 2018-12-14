#include <iostream>
using namespace std;

int main()
{
    int nilai [100];
    int input,minimal, maksimal;
    cout << " Masukkan banyaknya input :" ; cin >> input ;
    cout << "\n" ;
    maksimal=-1000;
    minimal=1000;


    for ( int i=0; i<input; i++)
    {
        cout << " Nilai ke - " << i << " : " ;
        cin >> nilai [i];
    }
    cout << "\n" ;
    for (int i=0; i<input; i++)
    {
        if(nilai[i]<minimal)
        {
            minimal=nilai[i];
        }
        if(nilai[i]>maksimal)
        {
            maksimal=nilai[i];
        }
    }

    cout<<" Nilai minimal = " << minimal << endl;
    cout<<" Nilai maksimal = " << maksimal << endl;
    return 0;
}
