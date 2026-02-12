void bad()
{
    char * data;
    /* Initialize data*/
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        {
            char myString[] = "myString";
            /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
            data = strdup(myString);
        }
    }
    else
    {
        /* FIX: Allocate memory from the heap using new */
        data = new char;
    }
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
         * require a call to free() to deallocate the memory */
        delete data;
    }
    else
    {
        /* FIX: Deallocate the memory using free() */
        free(data);
    }
}
