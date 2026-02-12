void bad()
{
    char * data;
    data = NULL; /* Initialize data */
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        static char dataBuffer[100];
        memset(dataBuffer, 'A', 100-1); /* fill with 'A's */
        dataBuffer[100-1] = '\0'; /* null terminate */
        data = dataBuffer;
    }
    {
        char * dataCopy = data;
        char * data = dataCopy;
        printLine(data);
        /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
        delete [] data;
    }
}
