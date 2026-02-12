void CWE758_Undefined_Behavior__int_alloca_use_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            int * pointer = (int *)ALLOCA(sizeof(int));
            int data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printIntLine(data);
        }
    }
}
