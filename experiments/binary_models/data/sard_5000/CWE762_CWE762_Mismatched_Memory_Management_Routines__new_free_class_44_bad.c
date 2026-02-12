void bad()
{
    TwoIntsClass * data;
    /* define a function pointer */
    void (*funcPtr) (TwoIntsClass *) = badSink;
    /* Initialize data*/
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
    data = new TwoIntsClass;
    /* use the function pointer */
    funcPtr(data);
}
