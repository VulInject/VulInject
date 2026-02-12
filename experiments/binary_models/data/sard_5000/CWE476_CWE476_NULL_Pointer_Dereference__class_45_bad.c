void bad()
{
    TwoIntsClass * data;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    badData = data;
    badSink();
}
