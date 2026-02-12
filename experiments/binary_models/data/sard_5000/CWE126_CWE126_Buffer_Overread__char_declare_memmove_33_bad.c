void bad()
{
    char * data;
    char * &dataRef = data;
    char dataBadBuffer[50];
    char dataGoodBuffer[100];
    memset(dataBadBuffer, 'A', 50-1); /* fill with 'A's */
    dataBadBuffer[50-1] = '\0'; /* null terminate */
    memset(dataGoodBuffer, 'A', 100-1); /* fill with 'A's */
    dataGoodBuffer[100-1] = '\0'; /* null terminate */
    /* FLAW: Set data pointer to a small buffer */
    data = dataBadBuffer;
    {
        char * data = dataRef;
        {
            char dest[100];
            memset(dest, 'C', 100-1);
            dest[100-1] = '\0'; /* null terminate */
            /* POTENTIAL FLAW: using memmove with the length of the dest where data
             * could be smaller than dest causing buffer overread */
            memmove(dest, data, strlen(dest)*sizeof(char));
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}
