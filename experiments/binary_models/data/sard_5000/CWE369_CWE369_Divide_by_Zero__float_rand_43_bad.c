void bad()
{
    float data;
    /* Initialize data */
    data = 0.0F;
    badSource(data);
    {
        /* POTENTIAL FLAW: Possibly divide by zero */
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
