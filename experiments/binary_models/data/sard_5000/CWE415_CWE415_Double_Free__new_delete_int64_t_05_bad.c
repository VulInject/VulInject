void bad()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    if(staticTrue)
    {
        data = new int64_t;
        /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
        delete data;
    }
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete data;
    }
}
