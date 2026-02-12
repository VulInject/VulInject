void CWE190_Integer_Overflow__char_rand_add_02_bad()
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
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            char result = data + 1;
            printHexCharLine(result);
        }
    }
}
