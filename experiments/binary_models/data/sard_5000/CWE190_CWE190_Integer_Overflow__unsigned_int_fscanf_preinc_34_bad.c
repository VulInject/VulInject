void CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_34_bad()
{
    unsigned int data;
    CWE190_Integer_Overflow__unsigned_int_fscanf_preinc_34_unionType myUnion;
    data = 0;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%u", &data);
    myUnion.unionFirst = data;
    {
        unsigned int data = myUnion.unionSecond;
        {
            /* POTENTIAL FLAW: Incrementing data could cause an overflow */
            ++data;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
