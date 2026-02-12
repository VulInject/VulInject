void bad()
{
    char * data;
    /* Initialize data */
    data = NULL;
    while(1)
    {
        data = new char;
        *data = 'A';
        /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
        delete data;
        break;
    }
    while(1)
    {
        /* POTENTIAL FLAW: Use of data that may have been deleted */
        printHexCharLine(*data);
        /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not deleted */
        break;
    }
}
