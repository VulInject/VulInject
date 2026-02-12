void CWE690_NULL_Deref_From_Return__wchar_t_calloc_45_bad()
{
    wchar_t * data;
    data = NULL; /* Initialize data */
    /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
    data = (wchar_t *)calloc(20, sizeof(wchar_t));
    CWE690_NULL_Deref_From_Return__wchar_t_calloc_45_badData = data;
    badSink();
}
