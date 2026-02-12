void CWE546_Suspicious_Comment__LATER_04_bad()
{
    if(STATIC_CONST_TRUE)
    {
        /* FLAW: The following comment has the letters 'LATER' in it*/
        /* LATER: This comment has the letters 'LATER' in it, which is certainly
         * suspicious, because it could indicate this code is not finished.
         */
        printLine("Hello");
    }
}
