void CWE391_Unchecked_Error_Condition__sqrt_11_bad()
{
    if(globalReturnsTrue())
    {
        {
            double doubleNumber;
            doubleNumber = (double)sqrt((double)-1);
            /* FLAW: Do not check to see if sqrt() failed */
            printDoubleLine(doubleNumber);
        }
    }
}
