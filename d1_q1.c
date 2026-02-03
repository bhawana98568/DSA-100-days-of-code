#include <stdio.h>

int main()
{
    int n;

    int arr[1001];

    printf("Enter the number of elements (max 1000): ");
    scanf("%d", &n);

    if (n > 1000 || n < 0)
    {
        printf("Invalid input for n. Please enter a value between 0 and 1000.\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int pos, x;
    printf("Enter the position to insert at (1 to %d): ", n + 1);
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &x);

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position for insertion.\n");
        return 1;
    }

    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = x;
    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
