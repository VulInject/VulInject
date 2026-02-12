void bad()
{
    int * data;
    data = NULL; /* Initialize data */
    if(globalReturnsTrueOrFalse())
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            char buffer[sizeof(int)];
            int * dataBuffer = new(buffer) int;
            *dataBuffer = 5;
            data = dataBuffer;
        }
    }
    else
    {
        {
            /* FIX: data is allocated on the heap and deallocated in the BadSink */
            int * dataBuffer = new int;
            *dataBuffer = 5;
            data = dataBuffer;
        }
    }
    printIntLine(*data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
