void bad()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    if(5==5)
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
        delete [] data;
    }
    if(5==5)
    {
        /* POTENTIAL FLAW: Use of data that may have been deleted */
        printLongLongLine(data[0]);
        /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not deleted */
    }
}
