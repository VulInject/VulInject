void bad()
{
    int data;
    /* Initialize data */
    data = 0;
    badSource(data);
    {
        /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
        int result = data - 1;
        printIntLine(result);
    }
}
