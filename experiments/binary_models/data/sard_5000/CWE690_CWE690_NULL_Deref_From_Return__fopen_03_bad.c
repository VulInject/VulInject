void CWE690_NULL_Deref_From_Return__fopen_03_bad()
{
    FILE * data;
    /* Initialize data */
    data = NULL;
    /* POTENTIAL FLAW: Open a file without checking the return value for NULL */
    data = fopen("file.txt", "w+");
    if(5==5)
    {
        /* FLAW: if the fopen failed, data will be NULL here */
        fclose(data);
    }
}
