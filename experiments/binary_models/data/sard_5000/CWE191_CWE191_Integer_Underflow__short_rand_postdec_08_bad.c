void CWE191_Integer_Underflow__short_rand_postdec_08_bad()
{
    short data;
    data = 0;
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (short)RAND32();
    }
    if(staticReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            short result = data;
            printIntLine(result);
        }
    }
}
