void CWE690_NULL_Deref_From_Return__long_malloc_32_bad()
{
    long * data;
    long * *dataPtr1 = &data;
    long * *dataPtr2 = &data;
    data = NULL; /* Initialize data */
    {
        long * data = *dataPtr1;
        /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
        data = (long *)malloc(1*sizeof(long));
        *dataPtr1 = data;
    }
    {
        long * data = *dataPtr2;
        /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
        data[0] = 5L;
        printLongLine(data[0]);
        free(data);
    }
}
