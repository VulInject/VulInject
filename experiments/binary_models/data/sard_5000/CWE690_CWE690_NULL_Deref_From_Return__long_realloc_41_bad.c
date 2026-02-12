void CWE690_NULL_Deref_From_Return__long_realloc_41_bad()
{
    long * data;
    data = NULL; /* Initialize data */
    /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
    data = (long *)realloc(data, 1*sizeof(long));
    badSink(data);
}
