void CWE404_Improper_Resource_Shutdown__open_fclose_21_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    badStatic = 1; /* true */
    badSink(data);
}
