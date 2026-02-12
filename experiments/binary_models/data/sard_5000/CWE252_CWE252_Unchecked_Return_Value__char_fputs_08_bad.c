void CWE252_Unchecked_Return_Value__char_fputs_08_bad()
{
    if(staticReturnsTrue())
    {
        /* FLAW: Do not check the return value */
        fputs("string", stdout);
    }
}
