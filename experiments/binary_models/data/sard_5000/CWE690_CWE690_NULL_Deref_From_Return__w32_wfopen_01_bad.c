void CWE690_NULL_Deref_From_Return__w32_wfopen_01_bad()
{
    FILE * data;
    /* Initialize data */
    data = NULL;
    /* POTENTIAL FLAW: Open a file without checking the return value for NULL */
    data = _wfopen(L"file.txt", L"w+");
    /* FLAW: if the fopen failed, data will be NULL here */
    fclose(data);
}
