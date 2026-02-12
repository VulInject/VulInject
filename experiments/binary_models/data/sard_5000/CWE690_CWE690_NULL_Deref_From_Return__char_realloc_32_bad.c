void CWE690_NULL_Deref_From_Return__char_realloc_32_bad()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL; /* Initialize data */
    {
        char * data = *dataPtr1;
        /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
        data = (char *)realloc(data, 20*sizeof(char));
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
        strcpy(data, "Initialize");
        printLine(data);
        free(data);
    }
}
