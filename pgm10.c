#include <stdio.h>

int binary_search(int arr[], int n, int item) 
{
    int low = 0, high = n - 1;
    
    while (low <= high) 
    {
        int mid = (low + high)/ 2;

        if (arr[mid] == item) 
        {
            return mid;
        }

        if (arr[mid] < item) 
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }

    return -1; 
}

int main() 
{
    int n, item;


    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }


    printf("Enter the element to search: ");
    scanf("%d", &item);


    int result = binary_search(arr, n, item);

    if (result != -1) 
    {
        printf("Element found at index %d.\n", result);
    } else 
    {
        printf("Element not found.\n");
    }

    return 0;
}
