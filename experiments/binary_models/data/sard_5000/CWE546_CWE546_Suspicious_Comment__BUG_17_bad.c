void CWE546_Suspicious_Comment__BUG_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        /* FLAW: The following comment has the letters 'BUG' in it*/
        /* BUG: This comment has the letters 'BUG' in it, which is certainly
         * suspicious, because it could indicate this code has a BUG in it.
         */
        printLine("Hello");
    }
}
