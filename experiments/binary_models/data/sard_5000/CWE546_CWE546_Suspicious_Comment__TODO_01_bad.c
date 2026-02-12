void CWE546_Suspicious_Comment__TODO_01_bad()
{
    /* FLAW: The following comment has the letters 'TODO' in it*/
    /* TODO: This comment has the letters 'TODO' in it, which is certainly
     * suspicious, because it could indicate this code is not finished.
     */
    printLine("Hello");
}
