void bad()
{
    TwoIntsClass * data;
    /* Initialize data */
    data = NULL;
    while(1)
    {
        data = new TwoIntsClass[100];
        /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
        delete [] data;
        break;
    }
    while(1)
    {
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete [] data;
        break;
    }
}
