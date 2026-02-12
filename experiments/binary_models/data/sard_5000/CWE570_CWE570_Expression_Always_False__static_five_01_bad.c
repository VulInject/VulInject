void CWE570_Expression_Always_False__static_five_01_bad() 
{
    /* FLAW: This expression is always false */
    if (staticFive != 5) 
    {
        printLine("Never prints");
    }
}
