void CWE758_Undefined_Behavior__struct_alloca_use_14_bad()
{
    if(globalFive==5)
    {
        {
            twoIntsStruct * pointer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
            twoIntsStruct data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printIntLine(data.intOne);
            printIntLine(data.intTwo);
        }
    }
}
