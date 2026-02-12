void CWE191_Integer_Underflow__unsigned_int_rand_postdec_44_bad()
{
    unsigned int data;
    /* define a function pointer */
    void (*funcPtr) (unsigned int) = badSink;
    data = 0;
    /* POTENTIAL FLAW: Use a random value */
    data = (unsigned int)RAND32();
    /* use the function pointer */
    funcPtr(data);
}
