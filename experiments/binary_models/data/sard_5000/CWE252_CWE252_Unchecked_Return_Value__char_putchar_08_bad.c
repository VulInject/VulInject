void CWE252_Unchecked_Return_Value__char_putchar_08_bad()
{
    if(staticReturnsTrue())
    {
        /* FLAW: Do not check the return value */
        putchar((int)'A');
    }
}
