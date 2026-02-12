void bad()
{
    switch(6)
    {
    case 6:
    {
        TwoIntsClass * pointer = new TwoIntsClass;
        TwoIntsClass data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
        delete pointer;
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
