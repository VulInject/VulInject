void CWE476_NULL_Pointer_Dereference__int64_t_03_bad()
{
    int64_t * data;
    if(5==5)
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    if(5==5)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printLongLongLine(*data);
    }
}
