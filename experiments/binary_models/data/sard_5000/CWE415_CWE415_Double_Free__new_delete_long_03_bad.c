void bad()
{
    long * data;
    /* Initialize data */
    data = NULL;
    if(5==5)
    {
        data = new long;
        /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
        delete data;
    }
    if(5==5)
    {
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete data;
    }
}
