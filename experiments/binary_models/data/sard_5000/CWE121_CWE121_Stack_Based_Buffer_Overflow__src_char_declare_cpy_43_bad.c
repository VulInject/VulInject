void bad()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    badSource(data);
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        strcpy(dest, data);
        printLine(data);
    }
}
