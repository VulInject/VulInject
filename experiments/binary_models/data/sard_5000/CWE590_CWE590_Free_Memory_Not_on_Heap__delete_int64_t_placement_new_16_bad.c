void bad()
{
    int64_t * data;
    data = NULL; /* Initialize data */
    while(1)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            char buffer[sizeof(int64_t)];
            int64_t * dataBuffer = new(buffer) int64_t;
            *dataBuffer = 5LL;
            data = dataBuffer;
        }
        break;
    }
    printLongLongLine(*data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
