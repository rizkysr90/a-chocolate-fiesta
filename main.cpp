#include <iostream>
#include <math.h>

//problem https://www.hackerrank.com/challenges/a-chocolate-fiesta/problem;
int main()
{
    int even,odd,N,n,e,o;
    cin >> N;
    for (int i = 0; i<N; i++)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            even++;
        }
        else {
            odd++;
        }
    }
    e = pow(2,even);
    o = pow(2,odd-1);
    if (o == 0)
    {
        o = 1;
    }

    cout << o*e-1 << endl;

}
