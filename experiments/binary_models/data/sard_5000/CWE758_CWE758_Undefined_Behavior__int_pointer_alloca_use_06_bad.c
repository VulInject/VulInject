void CWE758_Undefined_Behavior__int_pointer_alloca_use_06_bad()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            int * * pointer = (int * *)ALLOCA(sizeof(int *));
            int * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printIntLine(*data);
        }
    }
}
