#include <iostream>
#include <math.h>
using namespace std;
 bool isPoweroftwo (int n) {
int ans = 1;
int m = 0;
        while (m < 31)
        {
            if (ans == n)
            {
               return true;
            }
            
            ans = ans * 2;

            m++;
        }
        return false;
    }

int main()
{
    int n;
    cin>>n;

  cout<<isPoweroftwo(n)<<endl;
    return 0;

}