void bad()
{
    int i;
    wchar_t * data;
    data = NULL; /* Initialize data */
    for(i = 0; i < 1; i++)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            wchar_t dataBuffer;
            dataBuffer = L'A';
            data = &dataBuffer;
        }
    }
    printWcharLine(*data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
