void CWE190_Integer_Overflow__int_rand_preinc_34_bad()
{
    int data;
    CWE190_Integer_Overflow__int_rand_preinc_34_unionType myUnion;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            /* POTENTIAL FLAW: Incrementing data could cause an overflow */
            ++data;
            int result = data;
            printIntLine(result);
        }
    }
}
