void bad()
{
    TwoIntsClass * data;
    /* define a function pointer */
    void (*funcPtr) (TwoIntsClass *) = badSink;
    /* Initialize data*/
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    /* use the function pointer */
    funcPtr(data);
}
