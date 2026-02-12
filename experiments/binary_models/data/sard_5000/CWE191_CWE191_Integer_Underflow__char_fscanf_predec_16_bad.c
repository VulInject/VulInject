void CWE191_Integer_Underflow__char_fscanf_predec_16_bad()
{
    char data;
    data = ' ';
    while(1)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%c", &data);
        break;
    }
    while(1)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            char result = data;
            printHexCharLine(result);
        }
        break;
    }
}
