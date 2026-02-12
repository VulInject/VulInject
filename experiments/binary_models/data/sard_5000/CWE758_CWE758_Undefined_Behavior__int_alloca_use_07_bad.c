void CWE758_Undefined_Behavior__int_alloca_use_07_bad()
{
    if(staticFive==5)
    {
        {
            int * pointer = (int *)ALLOCA(sizeof(int));
            int data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printIntLine(data);
        }
    }
}
