#include <iostream>

void change_arr(int *arr)
{
    int arr2[] = {4, 5, 6};
    arr = arr2;
}

int main()
{
    int arr[] = {1, 2, 3};
    change_arr(arr);
    std::cout << arr[0] << '\n';
    return 0;
}
