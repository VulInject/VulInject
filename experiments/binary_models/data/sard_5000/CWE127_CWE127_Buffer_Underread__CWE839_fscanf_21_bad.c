void CWE127_Buffer_Underread__CWE839_fscanf_21_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);
    badStatic = 1; /* true */
    badSink(data);
}
