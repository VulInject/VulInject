void bad()
{
    twoIntsStruct * data;
    /* Initialize data */
    data = NULL;
    if(1)
    {
        data = new twoIntsStruct[100];
        /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
        delete [] data;
    }
    if(1)
    {
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete [] data;
    }
}
