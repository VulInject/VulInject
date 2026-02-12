void CWE252_Unchecked_Return_Value__wchar_t_putchar_04_bad()
{
    if(STATIC_CONST_TRUE)
    {
        /* FLAW: Do not check the return value */
        putwchar((wchar_t)L'A');
    }
}
