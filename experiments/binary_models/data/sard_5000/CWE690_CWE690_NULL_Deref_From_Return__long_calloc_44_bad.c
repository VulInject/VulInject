void CWE690_NULL_Deref_From_Return__long_calloc_44_bad()
{
    long * data;
    /* define a function pointer */
    void (*funcPtr) (long *) = badSink;
    data = NULL; /* Initialize data */
    /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
    data = (long *)calloc(1, sizeof(long));
    /* use the function pointer */
    funcPtr(data);
}
