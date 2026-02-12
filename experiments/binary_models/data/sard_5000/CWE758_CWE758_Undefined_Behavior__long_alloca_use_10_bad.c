void CWE758_Undefined_Behavior__long_alloca_use_10_bad()
{
    if(globalTrue)
    {
        {
            long * pointer = (long *)ALLOCA(sizeof(long));
            long data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printLongLine(data);
        }
    }
}
