void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_16_bad()
{
    unsigned int data;
    data = 0;
    while(1)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%u", &data);
        break;
    }
    while(1)
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            unsigned int result = data - 1;
            printUnsignedLine(result);
        }
        break;
    }
}
