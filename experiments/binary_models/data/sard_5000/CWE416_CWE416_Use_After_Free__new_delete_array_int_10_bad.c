void bad()
{
    int * data;
    /* Initialize data */
    data = NULL;
    if(globalTrue)
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
        delete [] data;
    }
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Use of data that may have been deleted */
        printIntLine(data[0]);
        /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not deleted */
    }
}
