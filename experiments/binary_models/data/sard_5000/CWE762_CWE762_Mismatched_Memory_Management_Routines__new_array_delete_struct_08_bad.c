void bad()
{
    twoIntsStruct * data;
    /* Initialize data*/
    data = NULL;
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
        data = new twoIntsStruct[100];
    }
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
         * require a call to delete [] to deallocate the memory */
        delete data;
    }
}
