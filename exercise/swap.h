void swap(int *a, int *b)
{
    /*
    * This function swaps the values of two integers pointed to by a and b.
    * It uses a temporary variable to perform the swap.
    */
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SWAP(void *a, void *b, int size)
{
    /*
    * This function swaps the contents of two memory locations
    * pointed to by a and b, where size is the number of bytes to swap.
    * It uses a temporary buffer to perform the swap byte by byte.
    */
    unsigned char temp;
    unsigned char *pa = (unsigned char *)a;
    unsigned char *pb = (unsigned char *)b;

    for (int i = 0; i < size; i++)
    {
        temp = pa[i];
        pa[i] = pb[i];
        pb[i] = temp;
    }
}