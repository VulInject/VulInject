void CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_32_bad()
{
    FILE * data;
    FILE * *dataPtr1 = &data;
    FILE * *dataPtr2 = &data;
    /* Initialize data */
    data = NULL;
    {
        FILE * data = *dataPtr1;
        /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
        data = fopen("BadSource_fopen.txt", "w+");
        *dataPtr1 = data;
    }
    {
        FILE * data = *dataPtr2;
        if (data != NULL)
        {
            /* FLAW: Attempt to close the file using CloseHandle() instead of fclose() */
            CloseHandle((HANDLE)data);
        }
    }
}
