void bad()
{
    long * data;
    long * *dataPtr1 = &data;
    long * *dataPtr2 = &data;
    /* Initialize data*/
    data = NULL;
    {
        long * data = *dataPtr1;
        /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        *dataPtr1 = data;
    }
    {
        long * data = *dataPtr2;
        /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
         * require a call to free() to deallocate the memory */
        delete [] data;
    }
}
