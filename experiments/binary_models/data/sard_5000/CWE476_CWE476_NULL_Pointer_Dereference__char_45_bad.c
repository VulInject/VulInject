void CWE476_NULL_Pointer_Dereference__char_45_bad()
{
    char * data;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    CWE476_NULL_Pointer_Dereference__char_45_badData = data;
    badSink();
}
