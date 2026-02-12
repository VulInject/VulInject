void CWE252_Unchecked_Return_Value__char_puts_08_bad()
{
    if(staticReturnsTrue())
    {
        /* FLAW: Do not check the return value */
        PUTS("string");
    }
}
