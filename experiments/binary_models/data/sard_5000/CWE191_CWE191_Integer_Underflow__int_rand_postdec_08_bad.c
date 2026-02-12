void CWE191_Integer_Underflow__int_rand_postdec_08_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Set data to a random value */
        data = RAND32();
    }
    if(staticReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            int result = data;
            printIntLine(result);
        }
    }
}
