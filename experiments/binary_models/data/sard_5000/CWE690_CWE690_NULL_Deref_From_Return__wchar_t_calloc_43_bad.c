void bad()
{
    wchar_t * data;
    data = NULL; /* Initialize data */
    badSource(data);
    /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
    wcscpy(data, L"Initialize");
    printWLine(data);
    free(data);
}
