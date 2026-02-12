void CWE546_Suspicious_Comment__BUG_03_bad()
{
    if(5==5)
    {
        /* FLAW: The following comment has the letters 'BUG' in it*/
        /* BUG: This comment has the letters 'BUG' in it, which is certainly
         * suspicious, because it could indicate this code has a BUG in it.
         */
        printLine("Hello");
    }
}
