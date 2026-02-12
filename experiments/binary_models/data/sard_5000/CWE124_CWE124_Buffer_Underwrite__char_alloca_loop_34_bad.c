void CWE124_Buffer_Underwrite__char_alloca_loop_34_bad()
{
    char * data;
    CWE124_Buffer_Underwrite__char_alloca_loop_34_unionType myUnion;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    /* FLAW: Set data pointer to before the allocated memory buffer */
    data = dataBuffer - 8;
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            size_t i;
            char source[100];
            memset(source, 'C', 100-1); /* fill with 'C's */
            source[100-1] = '\0'; /* null terminate */
            /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            /* Ensure the destination buffer is null terminated */
            data[100-1] = '\0';
            printLine(data);
        }
    }
}
