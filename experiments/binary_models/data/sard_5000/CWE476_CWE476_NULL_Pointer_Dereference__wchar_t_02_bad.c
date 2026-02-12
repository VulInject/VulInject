void CWE476_NULL_Pointer_Dereference__wchar_t_02_bad()
{
    wchar_t * data;
    if(1)
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    if(1)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        /* printWLine() checks for NULL, so we cannot use it here */
        printWcharLine(data[0]);
    }
}
