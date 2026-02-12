void bad()
{
    long * data;
    data = NULL; /* Initialize data */
    if(staticTrue)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            static long dataBuffer[100];
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
