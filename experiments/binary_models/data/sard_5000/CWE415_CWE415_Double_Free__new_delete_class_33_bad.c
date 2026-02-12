void bad()
{
    TwoIntsClass * data;
    TwoIntsClass * &dataRef = data;
    /* Initialize data */
    data = NULL;
    data = new TwoIntsClass;
    /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
    delete data;
    {
        TwoIntsClass * data = dataRef;
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete data;
    }
}
