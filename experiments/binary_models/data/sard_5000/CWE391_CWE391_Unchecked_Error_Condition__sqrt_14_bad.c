void CWE391_Unchecked_Error_Condition__sqrt_14_bad()
{
    if(globalFive==5)
    {
        {
            double doubleNumber;
            doubleNumber = (double)sqrt((double)-1);
            /* FLAW: Do not check to see if sqrt() failed */
            printDoubleLine(doubleNumber);
        }
    }
}
