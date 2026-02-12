void bad()
{
    char * data;
    /* Initialize data */
    data = NULL;
    data = new char[100];
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
    /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
    delete [] data;
    /* POTENTIAL FLAW: Use of data that may have been deleted */
    printLine(data);
    /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not deleted */
}
