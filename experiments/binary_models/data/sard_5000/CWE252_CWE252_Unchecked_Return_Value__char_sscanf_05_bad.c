void CWE252_Unchecked_Return_Value__char_sscanf_05_bad()
{
    if(staticTrue)
    {
        {
            /* By initializing dataBuffer, we ensure this will not be the
             * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgets() and other variants */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* FLAW: Do not check the return value */
            sscanf(SRC, "%99s\0", data);
        }
    }
}
