void CWE476_NULL_Pointer_Dereference__long_31_bad()
{
    long * data;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    {
        long * dataCopy = data;
        long * data = dataCopy;
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printLongLine(*data);
    }
}
