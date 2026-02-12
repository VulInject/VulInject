void CWE191_Integer_Underflow__char_rand_postdec_06_bad()
{
    char data;
    data = ' ';
    if(STATIC_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (char)RAND32();
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            char result = data;
            printHexCharLine(result);
        }
    }
}
