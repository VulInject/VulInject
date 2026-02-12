void CWE690_NULL_Deref_From_Return__fopen_04_bad()
{
    FILE * data;
    /* Initialize data */
    data = NULL;
    /* POTENTIAL FLAW: Open a file without checking the return value for NULL */
    data = fopen("file.txt", "w+");
    if(STATIC_CONST_TRUE)
    {
        /* FLAW: if the fopen failed, data will be NULL here */
        fclose(data);
    }
}
