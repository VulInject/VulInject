void bad()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    {
        char * dataBuffer = new char[100];
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        /* FLAW: Set data pointer to before the allocated memory buffer */
        data = dataBuffer - 8;
    }
    {
        char * data = dataRef;
        {
            size_t i;
            char dest[100];
            memset(dest, 'C', 100-1); /* fill with 'C's */
            dest[100-1] = '\0'; /* null terminate */
            /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
            for (i = 0; i < 100; i++)
            {
                dest[i] = data[i];
            }
            /* Ensure null termination */
            dest[100-1] = '\0';
            printLine(dest);
            /* INCIDENTAL CWE-401: Memory Leak - data may not point to location
             * returned by new [] so can't safely call delete [] on it */
        }
    }
}
