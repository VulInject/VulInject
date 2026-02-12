void CWE775_Missing_Release_of_File_Descriptor_or_Handle__w32CreateFile_no_close_32_bad()
{
    HANDLE data;
    HANDLE *dataPtr1 = &data;
    HANDLE *dataPtr2 = &data;
    /* Initialize data */
    data = INVALID_HANDLE_VALUE;
    {
        HANDLE data = *dataPtr1;
        /* POTENTIAL FLAW: Open a file without closing it */
        data = CreateFile("BadSource_w32CreateFile.txt",
                          (GENERIC_WRITE|GENERIC_READ),
                          0,
                          NULL,
                          OPEN_ALWAYS,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL);
        *dataPtr1 = data;
    }
    {
        HANDLE data = *dataPtr2;
        /* FLAW: No attempt to close the file */
        ; /* empty statement needed for some flow variants */
    }
}
