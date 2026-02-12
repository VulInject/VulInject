void bad()
{
    char * data;
    /* Initialize data */
    data = NULL;
    if(5==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
        delete [] data;
    }
    if(5==5)
    {
        /* POTENTIAL FLAW: Use of data that may have been deleted */
        printLine(data);
        /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not deleted */
    }
}
