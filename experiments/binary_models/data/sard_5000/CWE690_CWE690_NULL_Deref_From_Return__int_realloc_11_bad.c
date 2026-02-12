void CWE690_NULL_Deref_From_Return__int_realloc_11_bad()
{
    int * data;
    data = NULL; /* Initialize data */
    /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
    data = (int *)realloc(data, 1*sizeof(int));
    if(globalReturnsTrue())
    {
        /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
        data[0] = 5;
        printIntLine(data[0]);
        free(data);
    }
}
