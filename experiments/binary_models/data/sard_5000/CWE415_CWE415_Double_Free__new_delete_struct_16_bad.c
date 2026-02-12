void bad()
{
    twoIntsStruct * data;
    /* Initialize data */
    data = NULL;
    while(1)
    {
        data = new twoIntsStruct;
        /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
        delete data;
        break;
    }
    while(1)
    {
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete data;
        break;
    }
}
