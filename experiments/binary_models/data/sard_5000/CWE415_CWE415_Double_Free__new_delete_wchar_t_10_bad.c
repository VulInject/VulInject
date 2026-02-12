void bad()
{
    wchar_t * data;
    /* Initialize data */
    data = NULL;
    if(globalTrue)
    {
        data = new wchar_t;
        /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
        delete data;
    }
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete data;
    }
}
