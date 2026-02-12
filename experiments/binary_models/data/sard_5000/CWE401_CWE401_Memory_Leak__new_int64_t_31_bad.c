void bad()
{
    int64_t * data;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = new int64_t;
    /* Initialize and make use of data */
    *data = 5LL;
    printLongLongLine(*data);
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}
