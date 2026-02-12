void bad()
{
    long * data;
    data = NULL; /* Initialize data */
    if(1)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            static long dataBuffer;
            dataBuffer = 5L;
            data = &dataBuffer;
        }
    }
    printLongLine(*data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
