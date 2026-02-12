void CWE191_Integer_Underflow__unsigned_int_fscanf_postdec_03_bad()
{
    unsigned int data;
    data = 0;
    if(5==5)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%u", &data);
    }
    if(5==5)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
