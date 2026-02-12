void CWE252_Unchecked_Return_Value__char_puts_01_bad()
{
    /* FLAW: Do not check the return value */
    PUTS("string");
}
