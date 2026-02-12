void CWE191_Integer_Underflow__int_connect_socket_predec_42_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    data = badSource(data);
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        --data;
        int result = data;
        printIntLine(result);
    }
}
