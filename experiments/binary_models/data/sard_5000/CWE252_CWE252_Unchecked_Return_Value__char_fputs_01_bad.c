void CWE252_Unchecked_Return_Value__char_fputs_01_bad()
{
    /* FLAW: Do not check the return value */
    fputs("string", stdout);
}
