void CWE252_Unchecked_Return_Value__w32ImpersonateSelf_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        /* FLAW: Do not check if ImpersonateSelf() fails */
        ImpersonateSelf(SecurityImpersonation);
    }
    else
    {
        /* FIX: Check to see if ImpersonateSelf() fails */
        if (!ImpersonateSelf(SecurityImpersonation))
        {
            exit(1);
        }
    }
}
