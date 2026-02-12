void bad()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    /* Initialize data*/
    data = NULL;
    {
        char * data = *dataPtr1;
        /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
        data = new char;
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
         * require a call to delete to deallocate the memory */
        delete [] data;
    }
}
