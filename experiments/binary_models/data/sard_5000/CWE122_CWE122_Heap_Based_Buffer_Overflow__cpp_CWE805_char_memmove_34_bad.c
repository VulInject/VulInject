void bad()
{
    char * data;
    unionType myUnion;
    data = NULL;
    /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = new char[50];
    data[0] = '\0'; /* null terminate */
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[100];
            memset(source, 'C', 100-1); /* fill with 'C's */
            source[100-1] = '\0'; /* null terminate */
            /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
            memmove(data, source, 100*sizeof(char));
            data[100-1] = '\0'; /* Ensure the destination buffer is null terminated */
            printLine(data);
            delete [] data;
        }
    }
}
