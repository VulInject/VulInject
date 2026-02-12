void CWE690_NULL_Deref_From_Return__char_malloc_34_bad()
{
    char * data;
    CWE690_NULL_Deref_From_Return__char_malloc_34_unionType myUnion;
    data = NULL; /* Initialize data */
    /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
    data = (char *)malloc(20*sizeof(char));
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
        strcpy(data, "Initialize");
        printLine(data);
        free(data);
    }
}
