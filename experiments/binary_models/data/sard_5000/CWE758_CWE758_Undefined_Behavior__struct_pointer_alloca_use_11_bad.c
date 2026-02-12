void CWE758_Undefined_Behavior__struct_pointer_alloca_use_11_bad()
{
    if(globalReturnsTrue())
    {
        {
            twoIntsStruct * * pointer = (twoIntsStruct * *)ALLOCA(sizeof(twoIntsStruct *));
            twoIntsStruct * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
    }
}
