void bad()
{
    char * data;
    /* Initialize data*/
    data = NULL;
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
        data = new char;
    }
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
         * require a call to delete to deallocate the memory */
        delete [] data;
    }
}
