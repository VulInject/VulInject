void bad()
{
    wchar_t * data;
    /* Initialize data*/
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
        data = wcsdup(myString);
    }
    badStatic = 1; /* true */
    badSink(data);
}
