void CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_44_bad()
{
    int * data;
    /* define a function pointer */
    void (*funcPtr) (int *) = badSink;
    data = NULL;
    /* FLAW: Allocate memory without using sizeof(int) */
    data = (int *)malloc(10);
    if (data == NULL) {exit(-1);}
    /* use the function pointer */
    funcPtr(data);
}
