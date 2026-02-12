void bad()
{
    wchar_t * data;
    /* Initialize data*/
    data = NULL;
    if(5==5)
    {
        /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
        data = new wchar_t;
    }
    if(5==5)
    {
        /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
         * require a call to delete to deallocate the memory */
        free(data);
    }
}
