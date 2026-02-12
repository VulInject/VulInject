void CWE190_Integer_Overflow__int_max_preinc_05_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Use the maximum value for this type */
        data = INT_MAX;
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
