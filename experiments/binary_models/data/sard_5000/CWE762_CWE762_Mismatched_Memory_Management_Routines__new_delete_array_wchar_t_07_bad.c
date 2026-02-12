void bad()
{
    wchar_t * data;
    /* Initialize data*/
    data = NULL;
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
        data = new wchar_t;
    }
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
         * require a call to delete to deallocate the memory */
        delete [] data;
    }
}
