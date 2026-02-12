void bad()
{
    char * data;
    data = NULL; /* Initialize data */
    if(globalFive==5)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            static char dataBuffer;
            dataBuffer = 'A';
            data = &dataBuffer;
        }
    }
    printHexCharLine(*data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
