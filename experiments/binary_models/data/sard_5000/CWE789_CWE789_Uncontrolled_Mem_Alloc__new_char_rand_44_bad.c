void bad()
{
    size_t data;
    /* define a function pointer */
    void (*funcPtr) (size_t) = badSink;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Set data to a random value */
    data = rand();
    /* use the function pointer */
    funcPtr(data);
}
