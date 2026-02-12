void CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_21_bad()
{
    int * data;
    data = NULL;
    badStatic = 1; /* true */
    data = badSource(data);
    {
        int source[10] = {0};
        /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
        memmove(data, source, 10*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
