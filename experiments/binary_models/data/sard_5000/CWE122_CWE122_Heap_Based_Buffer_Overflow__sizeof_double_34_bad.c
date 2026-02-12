void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_bad()
{
    double * data;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_unionType myUnion;
    /* Initialize data */
    data = NULL;
    /* INCIDENTAL: CWE-467 (Use of sizeof() on a pointer type) */
    /* FLAW: Using sizeof the pointer and not the data type in malloc() */
    data = (double *)malloc(sizeof(data));
    if (data == NULL) {exit(-1);}
    *data = 1.7E300;
    myUnion.unionFirst = data;
    {
        double * data = myUnion.unionSecond;
        /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
        printDoubleLine(*data);
        free(data);
    }
}
