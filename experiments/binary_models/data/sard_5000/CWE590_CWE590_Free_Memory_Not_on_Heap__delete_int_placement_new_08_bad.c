void bad()
{
    int * data;
    data = NULL; /* Initialize data */
    if(staticReturnsTrue())
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            char buffer[sizeof(int)];
            int * dataBuffer = new(buffer) int;
            *dataBuffer = 5;
            data = dataBuffer;
        }
    }
    printIntLine(*data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
