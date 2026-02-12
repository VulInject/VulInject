void CWE252_Unchecked_Return_Value__char_fprintf_05_bad()
{
    if(staticTrue)
    {
        /* FLAW: Do not check the return value */
        fprintf(stdout, "%s\n", "string");
    }
}
