void bad()
{
    int * data;
    /* Initialize data */
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int;
        *data = 5;
        /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
        delete data;
    }
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Use of data that may have been deleted */
        printIntLine(*data);
        /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not deleted */
    }
}
