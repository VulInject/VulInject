void bad()
{
    wchar_t * data;
    /* Initialize data*/
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
        data = new wchar_t[100];
    }
    else
    {
        /* FIX: Allocate memory from the heap using new */
        data = new wchar_t;
    }
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
         * require a call to delete [] to deallocate the memory */
        delete data;
    }
    else
    {
        /* FIX: Deallocate the memory using delete [] */
        delete [] data;
    }
}
