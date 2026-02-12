void bad()
{
    twoIntsStruct * data;
    /* Initialize data*/
    data = NULL;
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
        data = new twoIntsStruct[100];
    }
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Deallocate memory using free() - the source memory allocation function may
         * require a call to delete [] to deallocate the memory */
        free(data);
    }
}
