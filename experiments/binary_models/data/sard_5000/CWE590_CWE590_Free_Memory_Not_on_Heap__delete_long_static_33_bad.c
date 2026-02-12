void bad()
{
    long * data;
    long * &dataRef = data;
    data = NULL; /* Initialize data */
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        static long dataBuffer;
        dataBuffer = 5L;
        data = &dataBuffer;
    }
    {
        long * data = dataRef;
        printLongLine(*data);
        /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
        delete data;
    }
}
