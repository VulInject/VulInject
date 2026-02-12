void CWE570_Expression_Always_False__global_return_01_bad() 
{
    /* FLAW: This expression is always false */
    if (globalReturnsFalse()) 
    {
        printLine("Never prints");
    }
}
