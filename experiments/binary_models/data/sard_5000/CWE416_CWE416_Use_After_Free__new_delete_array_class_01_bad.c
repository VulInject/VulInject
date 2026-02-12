void bad()
{
    TwoIntsClass * data;
    /* Initialize data */
    data = NULL;
    data = new TwoIntsClass[100];
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
    /* POTENTIAL FLAW: Use of data that may have been deleted */
    printIntLine(data[0].intOne);
    /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not deleted */
}
