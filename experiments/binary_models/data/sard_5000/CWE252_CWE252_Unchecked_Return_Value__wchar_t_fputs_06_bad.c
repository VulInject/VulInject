void CWE252_Unchecked_Return_Value__wchar_t_fputs_06_bad()
{
    if(STATIC_CONST_FIVE==5)
    {
        /* FLAW: Do not check the return value */
        fputws(L"string", stdout);
    }
}
