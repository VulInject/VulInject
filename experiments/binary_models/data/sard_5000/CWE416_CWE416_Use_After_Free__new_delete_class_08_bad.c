void bad()
{
    TwoIntsClass * data;
    /* Initialize data */
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
        delete data;
    }
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Use of data that may have been deleted */
        printIntLine(data->intOne);
        /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not deleted */
    }
}
