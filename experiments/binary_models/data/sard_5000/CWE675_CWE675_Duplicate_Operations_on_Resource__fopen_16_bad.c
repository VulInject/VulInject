void CWE675_Duplicate_Operations_on_Resource__fopen_16_bad()
{
    FILE * data;
    data = NULL; /* Initialize data */
    while(1)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        /* POTENTIAL FLAW: Close the file in the source */
        fclose(data);
        break;
    }
    while(1)
    {
        /* POTENTIAL FLAW: Close the file in the sink (it may have been closed in the Source) */
        fclose(data);
        break;
    }
}
