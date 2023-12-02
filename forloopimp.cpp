// implimantation of array using for loop
#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter the the no of array you want\n";
    cin >> n;
    int marks[n];
    for (int i = 0; i <= n; i++)
    {
        printf("Enter the no you wamt to insert\n");
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i <= n; i++)
        printf("%d\n", &marks[i]);

    for (int i = 0; i <= n; i++)
        printf("%d\t", marks[i]);
}