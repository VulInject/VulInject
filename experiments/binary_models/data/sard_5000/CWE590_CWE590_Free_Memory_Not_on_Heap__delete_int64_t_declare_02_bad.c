void bad()
{
    int64_t * data;
    data = NULL; /* Initialize data */
    if(1)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            int64_t dataBuffer;
            dataBuffer = 5LL;
            data = &dataBuffer;
        }
    }
    printLongLongLine(*data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
