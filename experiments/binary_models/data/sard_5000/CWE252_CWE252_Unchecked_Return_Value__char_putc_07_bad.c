void CWE252_Unchecked_Return_Value__char_putc_07_bad()
{
    if(staticFive==5)
    {
        /* FLAW: Do not check the return value */
        putc((int)'A', stdout);
    }
}
