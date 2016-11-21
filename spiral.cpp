#include <iostream>
const int r = 4;
const int c = 4;

void spiralPrint( int m, int n, const int a[r][c])
{
    int i, k= 0, l=0;
    
    while (k<m && l<n)
    {
        for (i=l; i<n; i++)
        {
            a[k][i];
        }
        k++;
        for (i=k; i<m; i++)
        {
            a[i][n-1];
        }
        n--;
        if (k<m)
        {
            
        }
        
        if (l<n)
        {
            
        }
    }
}

int main()
{
    int a[r][c] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    spiralPrint(r,c,a);
}