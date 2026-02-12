void CWE758_Undefined_Behavior__double_pointer_alloca_use_11_bad()
{
    if(globalReturnsTrue())
    {
        {
            double * * pointer = (double * *)ALLOCA(sizeof(double *));
            double * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printDoubleLine(*data);
        }
    }
}
