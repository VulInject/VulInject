void CWE758_Undefined_Behavior__struct_alloca_use_15_bad()
{
    switch(6)
    {
    case 6:
    {
        twoIntsStruct * pointer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
        twoIntsStruct data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}
