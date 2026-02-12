void bad()
{
    int data;
    /* Initialize data */
    data = 0;
    badSource(data);
    {
        /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
        int result = data + 1;
        printIntLine(result);
    }
}
