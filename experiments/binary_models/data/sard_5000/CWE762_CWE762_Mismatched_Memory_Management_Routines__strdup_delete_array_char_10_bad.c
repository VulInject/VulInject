void bad()
{
    char * data;
    /* Initialize data*/
    data = NULL;
    if(globalTrue)
    {
        {
            char myString[] = "myString";
            /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
            data = strdup(myString);
        }
    }
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
         * require a call to free() to deallocate the memory */
        delete [] data;
    }
}
