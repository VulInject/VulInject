void CWE252_Unchecked_Return_Value__char_fread_07_bad()
{
    if(staticFive==5)
    {
        {
            /* By initializing dataBuffer, we ensure this will not be the
             * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgets() and other variants */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* FLAW: Do not check the return value */
            fread((char *)data, sizeof(char), (size_t)(100-1), stdin);
        }
    }
}
