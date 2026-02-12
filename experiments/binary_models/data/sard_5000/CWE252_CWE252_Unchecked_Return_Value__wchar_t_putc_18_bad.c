void CWE252_Unchecked_Return_Value__wchar_t_putc_18_bad()
{
    goto sink;
sink:
    /* FLAW: Do not check the return value */
    putwc((wchar_t)L'A', stdout);
}
