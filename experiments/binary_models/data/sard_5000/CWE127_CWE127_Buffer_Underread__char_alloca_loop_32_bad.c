void CWE127_Buffer_Underread__char_alloca_loop_32_bad()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    {
        char * data = *dataPtr1;
        /* FLAW: Set data pointer to before the allocated memory buffer */
        data = dataBuffer - 8;
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
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
        }
    }
}
