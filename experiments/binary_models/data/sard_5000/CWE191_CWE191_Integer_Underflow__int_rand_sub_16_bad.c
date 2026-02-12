void CWE191_Integer_Underflow__int_rand_sub_16_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    while(1)
    {
        /* POTENTIAL FLAW: Set data to a random value */
        data = RAND32();
        break;
    }
    while(1)
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            int result = data - 1;
            printIntLine(result);
        }
        break;
    }
}
