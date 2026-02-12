void CWE690_NULL_Deref_From_Return__long_realloc_42_bad()
{
    long * data;
    data = NULL; /* Initialize data */
    data = badSource(data);
    /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
    data[0] = 5L;
    printLongLine(data[0]);
    free(data);
}
