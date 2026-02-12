void CWE476_NULL_Pointer_Dereference__wchar_t_34_bad()
{
    wchar_t * data;
    CWE476_NULL_Pointer_Dereference__wchar_t_34_unionType myUnion;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        /* printWLine() checks for NULL, so we cannot use it here */
        printWcharLine(data[0]);
    }
}
