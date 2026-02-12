void bad()
{
    int i;
    long * data;
    data = NULL; /* Initialize data */
    for(i = 0; i < 1; i++)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            long * dataBuffer = (long *)ALLOCA(100*sizeof(long));
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i] = 5L;
                }
            }
            data = dataBuffer;
        }
    }
    printLongLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete [] data;
}
