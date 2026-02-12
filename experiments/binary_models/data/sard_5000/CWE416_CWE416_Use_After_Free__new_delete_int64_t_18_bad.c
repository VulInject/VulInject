void bad()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    goto source;
source:
    data = new int64_t;
    *data = 5LL;
    /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
    delete data;
    goto sink;
sink:
    /* POTENTIAL FLAW: Use of data that may have been deleted */
    printLongLongLine(*data);
    /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not deleted */
}
