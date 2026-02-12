void bad()
{
    int64_t data;
    badSource(data);
    /* POTENTIAL FLAW: Use data without initializing it */
    printLongLongLine(data);
}
