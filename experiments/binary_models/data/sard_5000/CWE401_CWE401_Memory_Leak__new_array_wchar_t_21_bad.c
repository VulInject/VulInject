void bad()
{
    wchar_t * data;
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = new wchar_t[100];
    /* Initialize and make use of data */
    wcscpy(data, L"A String");
    printWLine(data);
    badStatic = 1; /* true */
    badSink(data);
}
