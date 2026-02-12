void bad()
{
    double * data;
    badSource(data);
    /* POTENTIAL FLAW: Use data without initializing it */
    printDoubleLine(*data);
}
