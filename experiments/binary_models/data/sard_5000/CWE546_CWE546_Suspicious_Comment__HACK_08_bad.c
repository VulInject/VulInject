void CWE546_Suspicious_Comment__HACK_08_bad()
{
    if(staticReturnsTrue())
    {
        /* FLAW: The following comment has the letters 'HACK' in it*/
        /* HACK: This comment has the letters 'HACK' in it, which is certainly
         * suspicious, because it could indicate this code needs to be investigated further.
         */
        printLine("Hello");
    }
}
