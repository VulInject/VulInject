void CWE690_NULL_Deref_From_Return__int64_t_calloc_45_bad()
{
    int64_t * data;
    data = NULL; /* Initialize data */
    /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
    data = (int64_t *)calloc(1, sizeof(int64_t));
    CWE690_NULL_Deref_From_Return__int64_t_calloc_45_badData = data;
    badSink();
}
