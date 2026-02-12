void CWE252_Unchecked_Return_Value__char_remove_01_bad()
{
    /* FLAW: Do not check the return value */
    REMOVE("removemebad.txt");
}
