void CWE690_NULL_Deref_From_Return__int_malloc_42_bad()
{
    int * data;
    data = NULL; /* Initialize data */
    data = badSource(data);
    /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
    data[0] = 5;
    printIntLine(data[0]);
    free(data);
}
