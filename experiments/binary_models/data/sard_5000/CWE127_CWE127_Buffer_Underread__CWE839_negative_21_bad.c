void CWE127_Buffer_Underread__CWE839_negative_21_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Use an invalid index */
    data = -5;
    badStatic = 1; /* true */
    badSink(data);
}
