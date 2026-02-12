void CWE476_NULL_Pointer_Dereference__int64_t_04_bad()
{
    int64_t * data;
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printLongLongLine(*data);
    }
}
