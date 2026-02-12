void CWE252_Unchecked_Return_Value__wchar_t_remove_07_bad()
{
    if(staticFive==5)
    {
        /* FLAW: Do not check the return value */
        REMOVE(L"removemebad.txt");
    }
}
