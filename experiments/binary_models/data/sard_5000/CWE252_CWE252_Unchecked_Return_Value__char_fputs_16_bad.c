void CWE252_Unchecked_Return_Value__char_fputs_16_bad()
{
    while(1)
    {
        /* FLAW: Do not check the return value */
        fputs("string", stdout);
        break;
    }
}
