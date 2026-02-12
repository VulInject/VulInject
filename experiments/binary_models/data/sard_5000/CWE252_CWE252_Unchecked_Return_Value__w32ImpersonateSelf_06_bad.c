void CWE252_Unchecked_Return_Value__w32ImpersonateSelf_06_bad()
{
    if(STATIC_CONST_FIVE==5)
    {
        /* FLAW: Do not check if ImpersonateSelf() fails */
        ImpersonateSelf(SecurityImpersonation);
    }
}
