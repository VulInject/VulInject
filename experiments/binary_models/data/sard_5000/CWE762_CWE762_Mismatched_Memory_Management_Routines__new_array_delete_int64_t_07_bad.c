void bad()
{
    int64_t * data;
    /* Initialize data*/
    data = NULL;
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
        data = new int64_t[100];
    }
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
         * require a call to delete [] to deallocate the memory */
        delete data;
    }
}
