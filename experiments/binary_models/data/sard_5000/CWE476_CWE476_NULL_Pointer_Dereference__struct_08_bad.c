void CWE476_NULL_Pointer_Dereference__struct_08_bad()
{
    twoIntsStruct * data;
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printIntLine(data->intOne);
    }
}
