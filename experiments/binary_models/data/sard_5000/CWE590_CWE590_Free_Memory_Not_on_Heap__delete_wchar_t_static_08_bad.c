void bad()
{
    wchar_t * data;
    data = NULL; /* Initialize data */
    if(staticReturnsTrue())
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            static wchar_t dataBuffer;
            dataBuffer = L'A';
            data = &dataBuffer;
        }
    }
    printWcharLine(*data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
