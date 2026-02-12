void bad()
{
    int data;
    /* Initialize data */
    data = -1;
    badSource(data);
    /* POTENTIAL FLAW: Possibly divide by zero */
    printIntLine(100 % data);
}
