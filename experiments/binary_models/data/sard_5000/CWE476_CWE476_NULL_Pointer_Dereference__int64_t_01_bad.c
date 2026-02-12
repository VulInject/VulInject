void CWE476_NULL_Pointer_Dereference__int64_t_01_bad()
{
    int64_t * data;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
    printLongLongLine(*data);
}
