void bad()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    data = new int64_t;
    /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
    delete data;
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete data;
    }
}
