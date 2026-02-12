void CWE690_NULL_Deref_From_Return__int64_t_malloc_31_bad()
{
    int64_t * data;
    data = NULL; /* Initialize data */
    /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
    data = (int64_t *)malloc(1*sizeof(int64_t));
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
        /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
        data[0] = 5LL;
        printLongLongLine(data[0]);
        free(data);
    }
}
