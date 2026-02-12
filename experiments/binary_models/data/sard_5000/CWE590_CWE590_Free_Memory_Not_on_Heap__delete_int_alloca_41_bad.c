void bad()
{
    int * data;
    data = NULL; /* Initialize data */
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        int * dataBuffer = (int *)ALLOCA(sizeof(int));
        *dataBuffer = 5;
        data = dataBuffer;
    }
    badSink(data);
}
