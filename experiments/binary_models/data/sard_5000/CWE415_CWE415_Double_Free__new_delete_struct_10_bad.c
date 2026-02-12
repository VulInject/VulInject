void bad()
{
    twoIntsStruct * data;
    /* Initialize data */
    data = NULL;
    if(globalTrue)
    {
        data = new twoIntsStruct;
        /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
        delete data;
    }
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete data;
    }
}
