void CWE252_Unchecked_Return_Value__wchar_t_fputs_07_bad()
{
    if(staticFive==5)
    {
        /* FLAW: Do not check the return value */
        fputws(L"string", stdout);
    }
}
