void CWE252_Unchecked_Return_Value__wchar_t_remove_04_bad()
{
    if(STATIC_CONST_TRUE)
    {
        /* FLAW: Do not check the return value */
        REMOVE(L"removemebad.txt");
    }
}
