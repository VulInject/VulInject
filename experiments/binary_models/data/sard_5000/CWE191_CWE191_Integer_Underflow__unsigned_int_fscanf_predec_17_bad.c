void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_17_bad()
{
    int i,j;
    unsigned int data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%u", &data);
    }
    for(j = 0; j < 1; j++)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
