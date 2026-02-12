void CWE252_Unchecked_Return_Value__char_putc_05_bad()
{
    if(staticTrue)
    {
        /* FLAW: Do not check the return value */
        putc((int)'A', stdout);
    }
}
