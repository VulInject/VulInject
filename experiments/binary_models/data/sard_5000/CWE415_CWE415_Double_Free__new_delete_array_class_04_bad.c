void bad()
{
    TwoIntsClass * data;
    /* Initialize data */
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new TwoIntsClass[100];
        /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
        delete [] data;
    }
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete [] data;
    }
}
