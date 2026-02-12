void CWE758_Undefined_Behavior__int64_t_alloca_use_18_bad()
{
    goto sink;
sink:
    {
        int64_t * pointer = (int64_t *)ALLOCA(sizeof(int64_t));
        int64_t data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
        printLongLongLine(data);
    }
}
