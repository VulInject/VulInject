void CWE252_Unchecked_Return_Value__char_fputs_03_bad()
{
    if(5==5)
    {
        /* FLAW: Do not check the return value */
        fputs("string", stdout);
    }
}
