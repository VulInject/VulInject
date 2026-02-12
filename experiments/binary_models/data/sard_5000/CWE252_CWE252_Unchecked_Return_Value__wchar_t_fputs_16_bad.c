void CWE252_Unchecked_Return_Value__wchar_t_fputs_16_bad()
{
    while(1)
    {
        /* FLAW: Do not check the return value */
        fputws(L"string", stdout);
        break;
    }
}
