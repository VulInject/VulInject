void CWE252_Unchecked_Return_Value__char_fprintf_08_bad()
{
    if(staticReturnsTrue())
    {
        /* FLAW: Do not check the return value */
        fprintf(stdout, "%s\n", "string");
    }
}
