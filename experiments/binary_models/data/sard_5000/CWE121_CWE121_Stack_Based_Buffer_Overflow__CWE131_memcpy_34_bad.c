void CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_34_bad()
{
    int * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_34_unionType myUnion;
    data = NULL;
    /* FLAW: Allocate memory without using sizeof(int) */
    data = (int *)ALLOCA(10);
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        {
            int source[10] = {0};
            /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
            memcpy(data, source, 10*sizeof(int));
            printIntLine(data[0]);
        }
    }
}
