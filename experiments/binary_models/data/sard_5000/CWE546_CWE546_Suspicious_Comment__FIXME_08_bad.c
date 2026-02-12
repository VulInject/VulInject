void CWE546_Suspicious_Comment__FIXME_08_bad()
{
    if(staticReturnsTrue())
    {
        /* FLAW: The following comment has the letters 'FIXME' in it*/
        /* FIXME: This comment has the letters 'FIXME' in it, which is certainly
         * suspicious, because it could indicate this code needs to be fixed.
         */
        printLine("Hello");
    }
}
