void CWE690_NULL_Deref_From_Return__int64_t_realloc_09_bad()
{
    int64_t * data;
    data = NULL; /* Initialize data */
    /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
    data = (int64_t *)realloc(data, 1*sizeof(int64_t));
    if(GLOBAL_CONST_TRUE)
    {
        /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
        data[0] = 5LL;
        printLongLongLine(data[0]);
        free(data);
    }
}
