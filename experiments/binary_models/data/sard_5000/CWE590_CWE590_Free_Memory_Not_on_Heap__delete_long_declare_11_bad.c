void bad()
{
    long * data;
    data = NULL; /* Initialize data */
    if(globalReturnsTrue())
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            long dataBuffer;
            dataBuffer = 5L;
            data = &dataBuffer;
        }
    }
    printLongLine(*data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
