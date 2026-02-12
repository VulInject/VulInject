void bad()
{
    TwoIntsClass * data;
    TwoIntsClass * *dataPtr1 = &data;
    TwoIntsClass * *dataPtr2 = &data;
    /* Initialize data*/
    data = NULL;
    {
        TwoIntsClass * data = *dataPtr1;
        /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
        data = new TwoIntsClass;
        *dataPtr1 = data;
    }
    {
        TwoIntsClass * data = *dataPtr2;
        /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
         * require a call to delete to deallocate the memory */
        delete [] data;
    }
}
