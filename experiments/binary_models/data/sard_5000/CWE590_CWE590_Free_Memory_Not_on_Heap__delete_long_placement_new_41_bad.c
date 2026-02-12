void bad()
{
    long * data;
    data = NULL; /* Initialize data */
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        char buffer[sizeof(long)];
        long * dataBuffer = new(buffer) long;
        *dataBuffer = 5L;
        data = dataBuffer;
    }
    badSink(data);
}
