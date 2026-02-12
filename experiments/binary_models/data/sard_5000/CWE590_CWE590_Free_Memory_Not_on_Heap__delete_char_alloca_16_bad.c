void bad()
{
    char * data;
    data = NULL; /* Initialize data */
    while(1)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            char * dataBuffer = (char *)ALLOCA(sizeof(char));
            *dataBuffer = 'A';
            data = dataBuffer;
        }
        break;
    }
    printHexCharLine(*data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
