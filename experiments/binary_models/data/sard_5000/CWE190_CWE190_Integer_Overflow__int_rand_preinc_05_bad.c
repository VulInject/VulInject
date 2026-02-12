void CWE190_Integer_Overflow__int_rand_preinc_05_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Set data to a random value */
        data = RAND32();
    }
    if(staticTrue)
    {
        {
            /* POTENTIAL FLAW: Incrementing data could cause an overflow */
            ++data;
            int result = data;
            printIntLine(result);
        }
    }
}
