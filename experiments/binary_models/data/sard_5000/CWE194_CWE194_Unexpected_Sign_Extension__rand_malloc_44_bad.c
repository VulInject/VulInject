void CWE194_Unexpected_Sign_Extension__rand_malloc_44_bad()
{
    short data;
    /* define a function pointer */
    void (*funcPtr) (short) = badSink;
    /* Initialize data */
    data = 0;
    /* FLAW: Use a random value that could be less than 0 */
    data = (short)RAND32();
    /* use the function pointer */
    funcPtr(data);
}
