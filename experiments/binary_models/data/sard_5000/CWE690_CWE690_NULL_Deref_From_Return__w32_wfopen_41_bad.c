void CWE690_NULL_Deref_From_Return__w32_wfopen_41_bad()
{
    FILE * data;
    /* Initialize data */
    data = NULL;
    /* POTENTIAL FLAW: Open a file without checking the return value for NULL */
    data = _wfopen(L"file.txt", L"w+");
    badSink(data);
}
