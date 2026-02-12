void CWE675_Duplicate_Operations_on_Resource__fopen_41_bad()
{
    FILE * data;
    data = NULL; /* Initialize data */
    data = fopen("BadSource_fopen.txt", "w+");
    /* POTENTIAL FLAW: Close the file in the source */
    fclose(data);
    badSink(data);
}
