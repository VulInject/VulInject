void bad()
{
    TwoIntsClass * data;
    /* Initialize data*/
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
    data = new TwoIntsClass;
    badSink(data);
}
