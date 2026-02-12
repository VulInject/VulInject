void bad()
{
    int64_t * data;
    int64_t * &dataRef = data;
    data = NULL; /* Initialize data */
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        int64_t dataBuffer;
        dataBuffer = 5LL;
        data = &dataBuffer;
    }
    {
        int64_t * data = dataRef;
        printLongLongLine(*data);
        /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
        delete data;
    }
}
