void CWE690_NULL_Deref_From_Return__struct_realloc_42_bad()
{
    twoIntsStruct * data;
    data = NULL; /* Initialize data */
    data = badSource(data);
    /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
    data[0].intOne = 1;
    data[0].intTwo = 1;
    printStructLine(&data[0]);
    free(data);
}
