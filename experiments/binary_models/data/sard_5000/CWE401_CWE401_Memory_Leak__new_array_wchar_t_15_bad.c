void bad()
{
    wchar_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = new wchar_t[100];
        /* Initialize and make use of data */
        wcscpy(data, L"A String");
        printWLine(data);
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}
