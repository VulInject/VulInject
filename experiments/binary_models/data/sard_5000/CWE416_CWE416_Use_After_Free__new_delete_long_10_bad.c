void bad()
{
    long * data;
    /* Initialize data */
    data = NULL;
    if(globalTrue)
    {
        data = new long;
        *data = 5L;
        /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
        delete data;
    }
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Use of data that may have been deleted */
        printLongLine(*data);
        /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not deleted */
    }
}
