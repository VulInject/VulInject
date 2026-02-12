void bad()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    /* Initialize data*/
    data = NULL;
    {
        char * data = *dataPtr1;
        {
            char myString[] = "myString";
            /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
            data = strdup(myString);
        }
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
         * require a call to free() to deallocate the memory */
        delete [] data;
    }
}
