void CWE546_Suspicious_Comment__LATER_15_bad()
{
    switch(6)
    {
    case 6:
        /* FLAW: The following comment has the letters 'LATER' in it*/
        /* LATER: This comment has the letters 'LATER' in it, which is certainly
         * suspicious, because it could indicate this code is not finished.
         */
        printLine("Hello");
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}
