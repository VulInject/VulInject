void bad()
{
    long * data;
    long * &dataRef = data;
    /* Initialize data*/
    data = NULL;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
    data = (long *)realloc(data, 100*sizeof(long));
    if (data == NULL) {exit(-1);}
    {
        long * data = dataRef;
        /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
         * require a call to free() to deallocate the memory */
        delete [] data;
    }
}
