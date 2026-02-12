void bad()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    {
        wchar_t * dataBuffer = new wchar_t[100];
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        /* FLAW: Set data pointer to before the allocated memory buffer */
        data = dataBuffer - 8;
    }
    {
        wchar_t * data = dataRef;
        {
            wchar_t dest[100*2];
            wmemset(dest, L'C', 100*2-1); /* fill with 'C's */
            dest[100*2-1] = L'\0'; /* null terminate */
            /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
            wcscpy(dest, data);
            printWLine(dest);
            /* INCIDENTAL CWE-401: Memory Leak - data may not point to location
             * returned by new [] so can't safely call delete [] on it */
        }
    }
}
