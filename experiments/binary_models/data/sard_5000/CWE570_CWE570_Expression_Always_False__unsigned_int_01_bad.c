void CWE570_Expression_Always_False__unsigned_int_01_bad() 
{
    /* Ensure (0 <= uIntBad < UINT_MAX) and that uIntBad is pseudo-random */
    unsigned int uIntBad = (unsigned int)(rand() * 2);

    /* FLAW: This expression is always false */
    if (uIntBad < 0) 
    {
        printLine("Never prints");
    }
}
