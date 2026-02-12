void CWE252_Unchecked_Return_Value__wchar_t_puts_13_bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        /* FLAW: Do not check the return value */
        PUTS(L"string");
    }
}
