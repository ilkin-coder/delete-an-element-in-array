#include <stdio.h>

int main()
{
    int total, del;
    printf("Enter the total amount of array : ");
    scanf("%d", &total);
    int arr[total];

    for (int i = 0; i<total; i++){
        printf("arr[%d] value: ", i);
        scanf ("%d", &arr[i]);

    }

    printf("\nCurrent array is : ");
    for (int i = 0; i<total; i++){

        printf("%d ", arr[i]);

    }

    printf("\nWhich index do you want to delete : ");
    scanf("%d", &del);


    for (int i=del; i<total; i++)
        arr[i] = arr [i+1];
    printf("\nYour new array is : ");
    for (int i = 0; i<total-1; i++){
        printf("%d ", arr[i]);

    }
}