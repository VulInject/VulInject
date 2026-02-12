void bad()
{
    int i,j;
    int * data;
    /* Initialize data*/
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    for(j = 0; j < 1; j++)
    {
        /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
         * require a call to free() to deallocate the memory */
        delete data;
    }
}
