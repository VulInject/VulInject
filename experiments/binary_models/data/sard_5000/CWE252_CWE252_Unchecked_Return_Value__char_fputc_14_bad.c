void CWE252_Unchecked_Return_Value__char_fputc_14_bad()
{
    if(globalFive==5)
    {
        /* FLAW: Do not check the return value */
        fputc((int)'A', stdout);
    }
}
