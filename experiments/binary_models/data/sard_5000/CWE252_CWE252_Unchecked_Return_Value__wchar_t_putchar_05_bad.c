void CWE252_Unchecked_Return_Value__wchar_t_putchar_05_bad()
{
    if(staticTrue)
    {
        /* FLAW: Do not check the return value */
        putwchar((wchar_t)L'A');
    }
}
