void GetMaxAndMin(int* arr, int len, int* max, int* min)
{
    /*
    * This function finds the maximum and minimum values in an array of integers.
    * It takes a pointer to the array, its length, and pointers to store the max and min values.
    * It initializes max and min with the first element and iterates through the array to find
    */
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}