void CWE476_NULL_Pointer_Dereference__int64_t_10_bad()
{
    int64_t * data;
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printLongLongLine(*data);
    }
}
