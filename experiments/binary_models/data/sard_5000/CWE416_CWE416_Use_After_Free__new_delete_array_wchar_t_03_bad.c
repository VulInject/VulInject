void bad()
{
    wchar_t * data;
    /* Initialize data */
    data = NULL;
    if(5==5)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
        delete [] data;
    }
    if(5==5)
    {
        /* POTENTIAL FLAW: Use of data that may have been deleted */
        printWLine(data);
        /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not deleted */
    }
}
