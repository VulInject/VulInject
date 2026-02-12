void CWE758_Undefined_Behavior__long_malloc_use_04_bad()
{
    if(STATIC_CONST_TRUE)
    {
        {
            long * pointer = (long *)malloc(sizeof(long));
            if (pointer == NULL) {exit(-1);}
            long data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            free(pointer);
            printLongLine(data);
        }
    }
}
