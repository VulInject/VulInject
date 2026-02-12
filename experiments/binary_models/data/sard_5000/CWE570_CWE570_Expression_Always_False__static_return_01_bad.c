void CWE570_Expression_Always_False__static_return_01_bad() 
{
    /* FLAW: This expression is always false */
    if (staticReturnsFalse()) 
    {
        printLine("Never prints");
    }
}
