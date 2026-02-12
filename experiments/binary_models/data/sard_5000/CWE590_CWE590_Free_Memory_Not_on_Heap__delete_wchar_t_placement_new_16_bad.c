void bad()
{
    wchar_t * data;
    data = NULL; /* Initialize data */
    while(1)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            char buffer[sizeof(wchar_t)];
            wchar_t * dataBuffer = new(buffer) wchar_t;
            *dataBuffer = L'A';
            data = dataBuffer;
        }
        break;
    }
    printWcharLine(*data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
