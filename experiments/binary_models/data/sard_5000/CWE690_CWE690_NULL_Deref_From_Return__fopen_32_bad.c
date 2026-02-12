void CWE690_NULL_Deref_From_Return__fopen_32_bad()
{
    FILE * data;
    FILE * *dataPtr1 = &data;
    FILE * *dataPtr2 = &data;
    /* Initialize data */
    data = NULL;
    {
        FILE * data = *dataPtr1;
        /* POTENTIAL FLAW: Open a file without checking the return value for NULL */
        data = fopen("file.txt", "w+");
        *dataPtr1 = data;
    }
    {
        FILE * data = *dataPtr2;
        /* FLAW: if the fopen failed, data will be NULL here */
        fclose(data);
    }
}
