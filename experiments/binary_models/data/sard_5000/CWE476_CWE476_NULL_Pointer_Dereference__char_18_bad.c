void CWE476_NULL_Pointer_Dereference__char_18_bad()
{
    char * data;
    goto source;
source:
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    goto sink;
sink:
    /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
    /* printLine() checks for NULL, so we cannot use it here */
    printHexCharLine(data[0]);
}
