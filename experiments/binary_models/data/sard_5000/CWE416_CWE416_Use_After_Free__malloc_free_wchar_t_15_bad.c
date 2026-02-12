void CWE416_Use_After_Free__malloc_free_wchar_t_15_bad()
{
    wchar_t * data;
    /* Initialize data */
    data = NULL;
    switch(6)
    {
    case 6:
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        /* POTENTIAL FLAW: Free data in the source - the bad sink attempts to use data */
        free(data);
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        /* POTENTIAL FLAW: Use of data that may have been freed */
        printWLine(data);
        /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not freed */
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}
