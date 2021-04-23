#include<bits/stdc++.h>
using namespace std;
 
int addDigit(long int n)
{
    int sum = 0;
    while(n > 0 || sum > 9)
    {
        if(n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    long int n;
    cout << "Enter A Number:";
    cin >> n;
    cout << addDigit(n);
    return 0;
}
