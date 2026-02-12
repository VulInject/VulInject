void CWE252_Unchecked_Return_Value__wchar_t_puts_09_bad()
{
    if(GLOBAL_CONST_TRUE)
    {
        /* FLAW: Do not check the return value */
        PUTS(L"string");
    }
}
