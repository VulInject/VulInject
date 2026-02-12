void bad()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[100];
    data = dataBuffer;
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    memset(data, 'A', 100-1); /* fill with 'A's */
    data[100-1] = '\0'; /* null terminate */
    {
        char * data = dataRef;
        {
            char dest[50] = "";
            size_t i, dataLen;
            dataLen = strlen(data);
            /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
            for (i = 0; i < dataLen; i++)
            {
                dest[i] = data[i];
            }
            dest[50-1] = '\0'; /* Ensure the destination buffer is null terminated */
            printLine(data);
        }
    }
}
