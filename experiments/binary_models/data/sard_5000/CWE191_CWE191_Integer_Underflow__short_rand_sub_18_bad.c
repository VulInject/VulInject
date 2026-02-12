void CWE191_Integer_Underflow__short_rand_sub_18_bad()
{
    short data;
    data = 0;
    goto source;
source:
    /* POTENTIAL FLAW: Use a random value */
    data = (short)RAND32();
    goto sink;
sink:
    {
        /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
        short result = data - 1;
        printIntLine(result);
    }
}
