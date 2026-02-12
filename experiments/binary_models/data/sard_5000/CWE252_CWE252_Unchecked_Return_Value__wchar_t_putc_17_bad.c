void CWE252_Unchecked_Return_Value__wchar_t_putc_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        /* FLAW: Do not check the return value */
        putwc((wchar_t)L'A', stdout);
    }
}
