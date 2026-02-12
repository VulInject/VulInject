void bad()
{
    twoIntsStruct * data;
    /* Initialize data */
    data = NULL;
    if(globalTrue)
    {
        data = new twoIntsStruct[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
        delete [] data;
    }
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Use of data that may have been deleted */
        printStructLine(&data[0]);
        /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not deleted */
    }
}
