void bad()
{
    int64_t * data;
    data = NULL;
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = new int64_t;
        /* Initialize and make use of data */
        *data = 5LL;
        printLongLongLine(*data);
    }
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}
