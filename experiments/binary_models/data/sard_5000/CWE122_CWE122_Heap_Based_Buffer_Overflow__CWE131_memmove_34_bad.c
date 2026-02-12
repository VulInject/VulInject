void CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_34_bad()
{
    int * data;
    CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_34_unionType myUnion;
    data = NULL;
    /* FLAW: Allocate memory without using sizeof(int) */
    data = (int *)malloc(10);
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        {
            int source[10] = {0};
            /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
            memmove(data, source, 10*sizeof(int));
            printIntLine(data[0]);
            free(data);
        }
    }
}
