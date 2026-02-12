void CWE571_Expression_Always_True__global_const_five_01_bad() 
{
    /* FLAW: This expression is always true */
    if (GLOBAL_CONST_FIVE == 5) 
    {
        printLine("Always prints");
    }
}
