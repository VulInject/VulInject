void CWE758_Undefined_Behavior__double_pointer_malloc_use_15_bad()
{
    switch(6)
    {
    case 6:
    {
        double * * pointer = (double * *)malloc(sizeof(double *));
        if (pointer == NULL) {exit(-1);}
        double * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
        free(pointer);
        printDoubleLine(*data);
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}
