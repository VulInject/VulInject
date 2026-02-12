void CWE252_Unchecked_Return_Value__char_fputc_08_bad()
{
    if(staticReturnsTrue())
    {
        /* FLAW: Do not check the return value */
        fputc((int)'A', stdout);
    }
}
