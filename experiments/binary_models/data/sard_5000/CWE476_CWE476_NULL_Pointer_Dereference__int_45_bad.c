void CWE476_NULL_Pointer_Dereference__int_45_bad()
{
    int * data;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    CWE476_NULL_Pointer_Dereference__int_45_badData = data;
    badSink();
}
