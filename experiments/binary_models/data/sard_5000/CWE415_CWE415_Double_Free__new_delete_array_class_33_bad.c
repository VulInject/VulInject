void bad()
{
    TwoIntsClass * data;
    TwoIntsClass * &dataRef = data;
    /* Initialize data */
    data = NULL;
    data = new TwoIntsClass[100];
    /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
    delete [] data;
    {
        TwoIntsClass * data = dataRef;
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete [] data;
    }
}
