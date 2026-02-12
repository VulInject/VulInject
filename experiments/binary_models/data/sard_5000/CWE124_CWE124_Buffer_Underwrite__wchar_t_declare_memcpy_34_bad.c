void CWE124_Buffer_Underwrite__wchar_t_declare_memcpy_34_bad()
{
    wchar_t * data;
    CWE124_Buffer_Underwrite__wchar_t_declare_memcpy_34_unionType myUnion;
    wchar_t dataBuffer[100];
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    /* FLAW: Set data pointer to before the allocated memory buffer */
    data = dataBuffer - 8;
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t source[100];
            wmemset(source, L'C', 100-1); /* fill with 'C's */
            source[100-1] = L'\0'; /* null terminate */
            /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
            memcpy(data, source, 100*sizeof(wchar_t));
            /* Ensure the destination buffer is null terminated */
            data[100-1] = L'\0';
            printWLine(data);
        }
    }
}
