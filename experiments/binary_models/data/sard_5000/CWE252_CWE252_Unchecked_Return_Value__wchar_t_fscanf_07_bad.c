void CWE252_Unchecked_Return_Value__wchar_t_fscanf_07_bad()
{
    if(staticFive==5)
    {
        {
            /* By initializing dataBuffer, we ensure this will not be the
             * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgetws() and other variants */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* FLAW: Do not check the return value */
            fwscanf(stdin, L"%99s\0", data);
        }
    }
}
