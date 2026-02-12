void CWE191_Integer_Underflow__char_rand_postdec_02_bad()
{
    char data;
    data = ' ';
    if(1)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (char)RAND32();
    }
    if(1)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            char result = data;
            printHexCharLine(result);
        }
    }
}
