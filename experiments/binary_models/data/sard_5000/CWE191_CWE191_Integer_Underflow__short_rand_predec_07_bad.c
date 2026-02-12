void CWE191_Integer_Underflow__short_rand_predec_07_bad()
{
    short data;
    data = 0;
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (short)RAND32();
    }
    if(staticFive==5)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            short result = data;
            printIntLine(result);
        }
    }
}
