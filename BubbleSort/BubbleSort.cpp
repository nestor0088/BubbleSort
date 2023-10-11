#include <iostream>
using namespace std;
void BubbleSort(int x[], int l)
{
    int i, j, temp;
    for (i = 0; i < l - 1; i++)
    {
        for (j = 0; j < l - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int gust[] = { 13,6,89,90,2,5,23,46,88,100,7};
    int len = sizeof(gust) / sizeof(int);
    cout << "Array gust before Sorting" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << gust[i] << " ";
    }
    BubbleSort(gust, len);
    cout << "\nArray gust after Sorting \n";
    for (int i = 0; i < len; i++)
    {
        cout << gust[i] << " ";
    }
}
