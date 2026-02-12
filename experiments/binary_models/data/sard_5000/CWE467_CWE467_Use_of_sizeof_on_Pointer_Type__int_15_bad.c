void CWE467_Use_of_sizeof_on_Pointer_Type__int_15_bad()
{
    switch(6)
    {
    case 6:
    {
        int * badInt = NULL;
        /* FLAW: Using sizeof the pointer and not the data type in malloc() */
        badInt = (int *)malloc(sizeof(badInt));
        if (badInt == NULL) {exit(-1);}
        *badInt = 5;
        printIntLine(*badInt);
        free(badInt);
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}
