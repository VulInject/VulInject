void bad()
{
    wchar_t * data;
    /* Initialize data*/
    data = NULL;
    if(staticTrue)
    {
        {
            wchar_t myString[] = L"myString";
            /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
            data = wcsdup(myString);
        }
    }
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Deallocate memory using delete [] - the source memory allocation function may
         * require a call to free() to deallocate the memory */
        delete [] data;
    }
}
