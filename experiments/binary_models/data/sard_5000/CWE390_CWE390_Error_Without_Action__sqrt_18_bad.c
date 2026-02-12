void CWE390_Error_Without_Action__sqrt_18_bad()
{
    goto sink;
sink:
    {
        double doubleNumber;
        errno = 0; /* set errno to zero before calling sqrt(), which can change its value */
        doubleNumber = (double)sqrt((double)-1);
        /* FLAW: Check errno to see if sqrt() failed, but do not handle errors */
        if (errno == EDOM)
        {
            /* do nothing */
        }
        printDoubleLine(doubleNumber);
    }
}
