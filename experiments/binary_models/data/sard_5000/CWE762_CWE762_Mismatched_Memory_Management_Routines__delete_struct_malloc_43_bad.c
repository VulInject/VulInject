void bad()
{
    twoIntsStruct * data;
    /* Initialize data*/
    data = NULL;
    badSource(data);
    /* POTENTIAL FLAW: Deallocate memory using delete - the source memory allocation function may
     * require a call to free() to deallocate the memory */
    delete data;
}
