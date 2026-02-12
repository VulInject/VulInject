void CWE690_NULL_Deref_From_Return__int_malloc_41_bad()
{
    int * data;
    data = NULL; /* Initialize data */
    /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
    data = (int *)malloc(1*sizeof(int));
    badSink(data);
}
