void CWE126_Buffer_Overread__char_declare_loop_32_bad()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBadBuffer[50];
    char dataGoodBuffer[100];
    memset(dataBadBuffer, 'A', 50-1); /* fill with 'A's */
    dataBadBuffer[50-1] = '\0'; /* null terminate */
    memset(dataGoodBuffer, 'A', 100-1); /* fill with 'A's */
    dataGoodBuffer[100-1] = '\0'; /* null terminate */
    {
        char * data = *dataPtr1;
        /* FLAW: Set data pointer to a small buffer */
        data = dataBadBuffer;
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            size_t i, destLen;
            char dest[100];
            memset(dest, 'C', 100-1);
            dest[100-1] = '\0'; /* null terminate */
            destLen = strlen(dest);
            /* POTENTIAL FLAW: using length of the dest where data
             * could be smaller than dest causing buffer overread */
            for (i = 0; i < destLen; i++)
            {
                dest[i] = data[i];
            }
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}
