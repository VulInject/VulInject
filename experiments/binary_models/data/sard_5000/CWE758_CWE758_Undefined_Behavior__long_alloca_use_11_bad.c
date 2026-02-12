void CWE758_Undefined_Behavior__long_alloca_use_11_bad()
{
    if(globalReturnsTrue())
    {
        {
            long * pointer = (long *)ALLOCA(sizeof(long));
            long data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printLongLine(data);
        }
    }
}
