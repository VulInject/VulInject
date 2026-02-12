void bad()
{
    int data;
    /* Initialize data */
    data = -1;
    badSource(data);
    {
        /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
