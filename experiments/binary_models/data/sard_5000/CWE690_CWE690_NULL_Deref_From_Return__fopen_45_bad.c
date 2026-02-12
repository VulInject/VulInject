void CWE690_NULL_Deref_From_Return__fopen_45_bad()
{
    FILE * data;
    /* Initialize data */
    data = NULL;
    /* POTENTIAL FLAW: Open a file without checking the return value for NULL */
    data = fopen("file.txt", "w+");
    CWE690_NULL_Deref_From_Return__fopen_45_badData = data;
    badSink();
}
