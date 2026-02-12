void CWE758_Undefined_Behavior__int_pointer_alloca_use_05_bad()
{
    if(staticTrue)
    {
        {
            int * * pointer = (int * *)ALLOCA(sizeof(int *));
            int * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printIntLine(*data);
        }
    }
}
