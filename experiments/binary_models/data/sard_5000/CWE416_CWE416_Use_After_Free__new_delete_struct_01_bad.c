void bad()
{
    twoIntsStruct * data;
    /* Initialize data */
    data = NULL;
    data = new twoIntsStruct;
    data->intOne = 1;
    data->intTwo = 2;
    /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
    delete data;
    /* POTENTIAL FLAW: Use of data that may have been deleted */
    printStructLine(data);
    /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not deleted */
}
