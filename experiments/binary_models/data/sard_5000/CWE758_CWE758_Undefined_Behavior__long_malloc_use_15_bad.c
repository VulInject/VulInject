void CWE758_Undefined_Behavior__long_malloc_use_15_bad()
{
    switch(6)
    {
    case 6:
    {
        long * pointer = (long *)malloc(sizeof(long));
        if (pointer == NULL) {exit(-1);}
        long data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
        free(pointer);
        printLongLine(data);
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}
