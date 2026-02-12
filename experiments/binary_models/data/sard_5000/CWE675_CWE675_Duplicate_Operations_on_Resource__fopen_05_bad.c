void CWE675_Duplicate_Operations_on_Resource__fopen_05_bad()
{
    FILE * data;
    data = NULL; /* Initialize data */
    if(staticTrue)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        /* POTENTIAL FLAW: Close the file in the source */
        fclose(data);
    }
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Close the file in the sink (it may have been closed in the Source) */
        fclose(data);
    }
}
