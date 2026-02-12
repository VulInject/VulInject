void bad()
{
    wchar_t * data;
    data = NULL; /* Initialize data */
    while(1)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            wchar_t dataBuffer;
            dataBuffer = L'A';
            data = &dataBuffer;
        }
        break;
    }
    printWcharLine(*data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
