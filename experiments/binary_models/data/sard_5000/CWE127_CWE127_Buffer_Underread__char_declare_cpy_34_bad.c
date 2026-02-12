void CWE127_Buffer_Underread__char_declare_cpy_34_bad()
{
    char * data;
    CWE127_Buffer_Underread__char_declare_cpy_34_unionType myUnion;
    char dataBuffer[100];
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    /* FLAW: Set data pointer to before the allocated memory buffer */
    data = dataBuffer - 8;
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char dest[100*2];
            memset(dest, 'C', 100*2-1); /* fill with 'C's */
            dest[100*2-1] = '\0'; /* null terminate */
            /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
            strcpy(dest, data);
            printLine(dest);
        }
    }
}
