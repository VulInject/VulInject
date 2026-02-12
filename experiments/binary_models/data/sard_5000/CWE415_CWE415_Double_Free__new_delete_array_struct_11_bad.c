void bad()
{
    twoIntsStruct * data;
    /* Initialize data */
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new twoIntsStruct[100];
        /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
        delete [] data;
    }
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete [] data;
    }
}
