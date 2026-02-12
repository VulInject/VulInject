void CWE571_Expression_Always_True__static_01_bad() 
{
    /* FLAW: This expression is always true */
    if (staticTrue) 
    {
        printLine("Always prints");
    }
}
