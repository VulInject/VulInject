void bad()
{
    long * data;
    /* define a function pointer */
    void (*funcPtr) (long *) = badSink;
    /* Initialize data*/
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
    data = (long *)calloc(100, sizeof(long));
    if (data == NULL) {exit(-1);}
    /* use the function pointer */
    funcPtr(data);
}
