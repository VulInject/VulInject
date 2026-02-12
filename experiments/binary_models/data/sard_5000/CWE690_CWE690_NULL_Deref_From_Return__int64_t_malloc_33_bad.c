void bad()
{
    int64_t * data;
    int64_t * &dataRef = data;
    data = NULL; /* Initialize data */
    /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
    data = (int64_t *)malloc(1*sizeof(int64_t));
    {
        int64_t * data = dataRef;
        /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
        data[0] = 5LL;
        printLongLongLine(data[0]);
        free(data);
    }
}
