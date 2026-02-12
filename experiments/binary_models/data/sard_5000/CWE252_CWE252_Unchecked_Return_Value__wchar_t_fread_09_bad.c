void CWE252_Unchecked_Return_Value__wchar_t_fread_09_bad()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            /* By initializing dataBuffer, we ensure this will not be the
             * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgetws() and other variants */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* FLAW: Do not check the return value */
            fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin);
        }
    }
}
