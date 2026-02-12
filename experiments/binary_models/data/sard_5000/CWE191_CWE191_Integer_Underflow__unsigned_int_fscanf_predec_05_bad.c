void CWE191_Integer_Underflow__unsigned_int_fscanf_predec_05_bad()
{
    unsigned int data;
    data = 0;
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%u", &data);
    }
    if(staticTrue)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
