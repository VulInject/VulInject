void CWE191_Integer_Underflow__char_rand_predec_34_bad()
{
    char data;
    CWE191_Integer_Underflow__char_rand_predec_34_unionType myUnion;
    data = ' ';
    /* POTENTIAL FLAW: Use a random value */
    data = (char)RAND32();
    myUnion.unionFirst = data;
    {
        char data = myUnion.unionSecond;
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
}
