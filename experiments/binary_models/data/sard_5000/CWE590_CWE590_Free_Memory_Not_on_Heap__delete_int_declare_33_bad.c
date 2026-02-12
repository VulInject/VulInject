void bad()
{
    int * data;
    int * &dataRef = data;
    data = NULL; /* Initialize data */
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        int dataBuffer;
        dataBuffer = 5;
        data = &dataBuffer;
    }
    {
        int * data = dataRef;
        printIntLine(*data);
        /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
        delete data;
    }
}
