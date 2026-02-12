void bad()
{
    char * data;
    /* Initialize data*/
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        {
            char myString[] = "myString";
            /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
            data = strdup(myString);
        }
    }
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
         * require a call to free() to deallocate the memory */
        delete [] data;
    }
}
